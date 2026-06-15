<img width="1890" height="1015" alt="image" src="https://github.com/user-attachments/assets/d95c25e0-81cb-430f-82a7-95e39a9da8e4" /># ESP32 Bluetooth Fare Projesi  
  
Bu proje, ESP32 geliştirme kartını kullanarak Bluetooth üzerinden çalışan kablosuz bir fare/sunum kumandası yapmayı hedefler.  
  
## 🎓 Neler Öğrendim?  
  
- **BLE (Bluetooth Low Energy) Haberleşmesi:** ESP32'nin HID (giriş cihazı) olarak nasıl tanıtılacağını öğrendim.  
- **Seri Haberleşme:** Seri port verilerini fare hareketlerine dönüştürme mantığını kavradım.  
- **PlatformIO:** Kütüphane yönetimi ve yapılandırma dosyası (`platformio.ini`) düzenlemeyi öğrendim.  
- **Git ve GitHub:** Proje yönetimi, hata ayıklama ve versiyon kontrol süreçlerini deneyimledim.  
  
## 🖼 Fotoğraf Galerisi ve Teknik Detaylar  
  
| Dosya Adı | Açıklama |  
| :--- | :--- |  
| **1.jpeg** | Devre şeması, breadboard bağlantıları ve güç dağılımı. |  
| **2.jpeg** | Bilgisayar ile ESP32'nin "Fare" olarak başarıyla eşleştiği an. |  
| **3.jpeg** | Bluetooth üzerinden iletilen verilerin seri monitördeki takibi. |  
| **4.jpeg** | X ve Y koordinatları için fare hareket algoritmaları denemeleri. |  
| **5.jpeg** | Jumper kablo düzenlemeleri ve donanım kararlılığı testleri. |  
| **6.png** | Projenin tüm fonksiyonlarıyla çalışan final prototipi. |  
  
## 🚀 Proje Komut Seti  
  
Projenin temel işlevlerini tetiklemek için terminalden gönderilen komutlar:  
  
- `1` : Fareyi yukarı hareket ettir  
- `2` : Fareyi aşağı hareket ettir  
- `3` : Fareyi sola hareket ettir  
- `4` : Fareyi sağa hareket ettir  
- `6` : Sağ tık işlevi  
  
## 🛠 Kullanılan Kütüphaneler  
  
- `BleMouse.h`: Fare taklidi yapmamızı sağlayan temel kütüphane.  
- `BluetoothSerial.h`: Seri veri iletimi için standart kütüphane.
- ## Projenin Çalışma Videosu
![Çalışma Videosu:](https://youtube.com/shorts/wgcYuhiUHbM?si=QmhvJbrrcrDZMxxv)
https://youtube.com/shorts/wgcYuhiUHbM?si=ATAEo5og1QvtOM4E 
PROJE SAHİBİ:Yağmur Kalkan
