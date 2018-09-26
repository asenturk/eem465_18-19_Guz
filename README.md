# SDÜ - ISUBU
## Teknoloji Fakültesi Elektrik Elektronik Mühendisliği Bölümü
### 2018-2019 Güz Dönemi EEM465 Gömülü Sistemler Dersi

* Derste kullanacağımız program: [STM32 F4 Discovery](https://www.st.com/en/evaluation-tools/stm32f4discovery.html)
(Şu an için cihazı almanıza gerek yok. Fiyatı daha uygun olan bir cihaz bulursak onu kullanacağız.)
* Elinde cihaz olanlar için Driver ve firmware kurması gerekebilir. [Linke](https://www.st.com/en/evaluation-tools/stm32f4discovery.html#sw-tools-scroll) tıkladıktan sonra
  *  [STSW-LINK009](https://www.st.com/content/st_com/en/products/development-tools/software-development-tools/stm32-software-development-tools/stm32-utilities/stsw-link009.html) linkinden ulaşılan programı kurmanız gerekiyor.
     * Bilgisayarı 64 bit olanlar: dpinst_amd64.exe dosyasını
     * Bilgisayar 32 bit olanlar: dpinst_x86.exe dosyasını kurması gerekiyor.
  * Firmware için [STSW-LINK007](https://www.st.com/content/st_com/en/products/development-tools/software-development-tools/stm32-software-development-tools/stm32-programmers/stsw-link007.html) linkinden ulaşılan program ile güncelleme yapılabilir. 
  
* Programarımızı [Keil µVision® IDE](http://www2.keil.com/mdk5/uvision/) ortamını kullanarak yazacağız. Download için [verilen sayfaya](https://www.keil.com/demo/eval/arm.htm) bilgilerinizi girmeniz gerekmektedir. Lite versiyonunu indirin lütfen.
* Keil sitesinde [STM32 F4 Discovery sayfası](https://www.keil.com/boards2/stmicroelectronics/stm32f4_discovery/)

#### Keil µVision® IDE Kurulacak paketler
* Program açıldığında Pack İnstaller butonunu kullanarak gerekli olan kütüphaneleri kuracağız.
* Boards sekmesinden sol panelden STM32F4-Discovery (STM32F407VG) yi seçiyoruz.
* Sağ panelden ise Keil::STM32f4xx_DFP kütüphanesini kuruyoruz.
 
  
