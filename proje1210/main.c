#include <stdio.h>
#include <stdlib.h>

int main() {
	
    // float: Ondalýklý sayýlar 
    float urun_tutari, odenen_para;

    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urun_tutari);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen_para);

    // Para üstünü hesaplayýp 100 ile çarparak kuruþ yapýyorum
    // Hassasiyet kaybýný , yuvarlama hatalarýný önlemek için int yapmadan önce + 0.5f ekliyorum ve int ondalýklý ifadeyi tam sayýya dönüþtürcek

    int kalan_kurus = (int)((odenen_para - urun_tutari) * 100.0f + 0.5f);

    // int kaç tane 50tl yada 50 kuruþ verilmesini gerektiðini geçiçi olarak tutacak deðiþken
    int adet;
    int toplam_kupur_sayisi = 0;

    printf("\n--- PARA USTU VERILECEK KUPURLER ---\n");

    // / bölme operatörü: Ýki tam sayý bölündüðünde bölümün tam kýsmýný 
    // % mod operatörü: Bölümden kalan sayýyý vericek

    // 200 TL = 20000 Kuruþ
    adet = kalan_kurus / 20000;          // kaç tane 200 TL verileceðini bulduk
    kalan_kurus = kalan_kurus % 20000;   // 200 TL'ler verildikten sonra kalan parayý güncelleyip
    toplam_kupur_sayisi += adet;         // toplam verilen adet sayýsýna ekledik
    printf("200 TL : %d adet\n", adet);

    // 100 TL = 10000 Kuruþ
    adet = kalan_kurus / 10000;
    kalan_kurus = kalan_kurus % 10000;
    toplam_kupur_sayisi += adet;
    printf("100 TL : %d adet\n", adet);

    // 50 TL = 5000 Kuruþ
    adet = kalan_kurus / 5000;
    kalan_kurus = kalan_kurus % 5000;
    toplam_kupur_sayisi += adet;
    printf("50 TL  : %d adet\n", adet);

    // 20 TL = 2000 Kuruþ
    adet = kalan_kurus / 2000;
    kalan_kurus = kalan_kurus % 2000;
    toplam_kupur_sayisi += adet;
    printf("20 TL  : %d adet\n", adet);

    // 10 TL = 1000 Kuruþ
    adet = kalan_kurus / 1000;
    kalan_kurus = kalan_kurus % 1000;
    toplam_kupur_sayisi += adet;
    printf("10 TL  : %d adet\n", adet);

    // 5 TL = 500 Kuruþ
    adet = kalan_kurus / 500;
    kalan_kurus = kalan_kurus % 500;
    toplam_kupur_sayisi += adet;
    printf("5 TL   : %d adet\n", adet);

    // 1 TL = 100 Kuruþ
    adet = kalan_kurus / 100;
    kalan_kurus = kalan_kurus % 100;
    toplam_kupur_sayisi += adet;
    printf("1 TL   : %d adet\n", adet);

    // 50 Kuruþ
    adet = kalan_kurus / 50;
    kalan_kurus = kalan_kurus % 50;
    toplam_kupur_sayisi += adet;
    printf("50 Kr  : %d adet\n", adet);

    // 25 Kuruþ
    adet = kalan_kurus / 25;
    kalan_kurus = kalan_kurus % 25;
    toplam_kupur_sayisi += adet;
    printf("25 Kr  : %d adet\n", adet);

    // 10 Kuruþ
    adet = kalan_kurus / 10;
    kalan_kurus = kalan_kurus % 10;
    toplam_kupur_sayisi += adet;
    printf("10 Kr  : %d adet\n", adet);

    // 5 Kuruþ
    adet = kalan_kurus / 5;
    kalan_kurus = kalan_kurus % 5;
    toplam_kupur_sayisi += adet;
    printf("5 Kr   : %d adet\n", adet);

    // 1 Kuruþ
    adet = kalan_kurus / 1;
    kalan_kurus = kalan_kurus % 1;
    toplam_kupur_sayisi += adet;
    printf("1 Kr   : %d adet\n", adet);

    // küpur sonucunu vericez
    printf("\nToplam verilen kupur adedi: %d\n", toplam_kupur_sayisi);
	
	return 0;
}
