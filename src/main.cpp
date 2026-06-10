#include <BleMouse.h>
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;
BleMouse bleMouse("ESP32_Sunum_Fare");

void setup() {
  SerialBT.begin("ESP32_Sunum_Fare"); 
  bleMouse.begin();
}

void loop() {
  if (SerialBT.available()) {
    char komut = SerialBT.read();
    
    // Yönlendirme (1-2-3-4)
    if (komut == '1') bleMouse.move(0, -10); 
    if (komut == '2') bleMouse.move(0, 10);  
    if (komut == '3') bleMouse.move(-10, 0); 
    if (komut == '4') bleMouse.move(10, 0);  
    
    // Sağ tık komutu (6 tuşuna basınca)
    if (komut == '6') { 
       bleMouse.press(MOUSE_RIGHT);
       delay(50);
       bleMouse.release(MOUSE_RIGHT); // releaseAll yerine bu!
    }
  }
}