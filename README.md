# Para Üstü Hesaplayıcı

Bu proje, bir mağaza kasasında yapılan alışverişler sonucunda müşteriye verilecek para üstünü en az sayıda banknot ve madeni para ile hesaplayan algoritmik bir C programıdır. Ürün tutarı ve müşterinin ödediği para ondalıklı sayı (float) olarak alınır, hesaplamalar sonucunda iade edilecek tüm küpürler ve toplam parça sayısı ekrana yansıtılır.

## Çalışma Mantığı ve Ana Fikir

Algoritma, geleneksel kontrol yapılarına ihtiyaç duymadan, tamamen doğrusal (lineer) bir matematiksel model üzerinden çalışacak şekilde tasarlanmıştır:

* **Hassasiyet Koruması:** Ondalıklı değerlerin bilgisayar belleğindeki yapısından kaynaklanan hesaplama hatalarını önlemek için, girilen float değerler matematiksel yuvarlama yapılarak tam sayı formatında kuruşa dönüştürülür.
* **Açgözlü Yaklaşım (Greedy Algorithm):** Müşteriye verilecek para üstü, en büyük değerli banknottan (200 TL) başlanarak tam sayı bölmesine tabi tutulur. 
* **Modüler Aktarım:** Her küpür adımında kalan tutar, modülüs (`%`) işlemiyle bir sonraki daha küçük değerli banknot veya madeni paranın hesabına devredilir. Bu ardışık işlem 1 kuruşluk madeni paraya kadar devam eder.

Bu yapı sayesinde program, dışarıdan girilen değerleri donanımsal yük yaratmadan ve mantıksal sapmalara girmeden en verimli küpür dağılımına dönüştürür.

## Derleme ve Çalıştırma

Projenin derlenmesi ve çalıştırılması için sisteminizde standart bir C derleyicisi (örneğin GCC) yüklü olmalıdır.

**1. Terminal üzerinden kodu derlemek için:**
```bash
gcc main.c -o para_ustu_hesaplayici
```

**2. Programı çalıştırmak için (Mac/Linux ortamında):**
```bash
./para_ustu_hesaplayici
```
*(Not: Windows ortamında çalıştırıyorsanız derleme sonrası oluşan `para_ustu_hesaplayici.exe` dosyasına çift tıklayabilir veya terminale `para_ustu_hesaplayici.exe` yazabilirsiniz.)*