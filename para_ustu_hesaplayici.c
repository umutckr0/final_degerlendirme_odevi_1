#include <stdio.h>

int main() {
    float tutar, odenen; // ürün tutarı ve ödenen para float tipinde tanımlanır
    
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &tutar);
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen);
    
    // ondalıklı sayılardaki hassasiyet problemini aşmak için sonuca 0.5 eklenerek manuel yuvarlama yapılır ve değer tam sayı kuruşa çevrilir
    int kurus = (int)(((odenen - tutar) * 100) + 0.5);
    
    printf("\n--- Verilecek Para Ustu ---\n");

    // banknot adetleri döngü veya koşul kullanmadan, sadece bölme ve mod işlemleriyle adım adım hesaplanır
    int adet_200 = kurus / 20000;
    kurus = kurus % 20000;
    
    int adet_100 = kurus / 10000;
    kurus = kurus % 10000;
    
    int adet_50 = kurus / 5000;
    kurus = kurus % 5000;
    
    int adet_20 = kurus / 2000;
    kurus = kurus % 2000;
    
    int adet_10 = kurus / 1000;
    kurus = kurus % 1000;
    
    int adet_5 = kurus / 500;
    kurus = kurus % 500;
    
    int adet_1 = kurus / 100;
    kurus = kurus % 100;
    
    // madeni para adetleri için de aynı matematiksel mantık uygulanır
    int adet_50k = kurus / 50;
    kurus = kurus % 50;
    
    int adet_25k = kurus / 25;
    kurus = kurus % 25;
    
    int adet_10k = kurus / 10;
    kurus = kurus % 10;
    
    int adet_5k = kurus / 5;
    kurus = kurus % 5;
    
    int adet_1k = kurus / 1;
    kurus = kurus % 1;

    // hesaplanan küpür adetleri ekrana yazdırılır
    printf("200 TL: %d adet\n", adet_200);
    printf("100 TL: %d adet\n", adet_100);
    printf("50 TL:  %d adet\n", adet_50);
    printf("20 TL:  %d adet\n", adet_20);
    printf("10 TL:  %d adet\n", adet_10);
    printf("5 TL:   %d adet\n", adet_5);
    printf("1 TL:   %d adet\n", adet_1);
    
    printf("50 Kurus: %d adet\n", adet_50k);
    printf("25 Kurus: %d adet\n", adet_25k);
    printf("10 Kurus: %d adet\n", adet_10k);
    printf("5 Kurus:  %d adet\n", adet_5k);
    printf("1 Kurus:  %d adet\n", adet_1k);
    
    // son olarak müşteriye verilecek toplam banknot ve madeni para adedi toplanıp program sonunda belirtilir
    int toplam_adet = adet_200 + adet_100 + adet_50 + adet_20 + adet_10 + adet_5 + adet_1 + 
                      adet_50k + adet_25k + adet_10k + adet_5k + adet_1k;
                      
    printf("\nToplam verilen kupur sayisi: %d\n", toplam_adet);
    
    return 0;
}
