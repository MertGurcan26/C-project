#include <stdio.h>

int main()
{
    int sifre, sifre2, girdi;
    
    // Kullanıcıdan 4 haneli bir şifre alınır ve 4 haneli olup olmadığı kontrol edilir
    do {
        printf("4 haneli bir şifre belirleyiniz: ");
        scanf("%d", &sifre);

        if (sifre >= 1000 && sifre <= 9999) {
            sifre2 = sifre;  // Şifreyi onaylayıp saklıyoruz
            break;  // Doğru şifre girilirse döngüden çıkılır
        } else {
            printf("Hata: 4 haneli bir sayı giriniz.\n");
        }
    } while (1);  // Sonsuz döngü, kullanıcı doğru şifre girene kadar devam eder
    
    // Kullanıcıdan şifreyi girmesini istiyoruz
    for (int i = 3; i > 0; i--) {
        printf("Şifrenizi giriniz: ");
        scanf("%d", &girdi);
        
        if (girdi == sifre2) {
            printf("Hoşgeldiniz\n");
            break;
        } else {
            printf("Yanlış şifre. ");
            if (i - 1 > 0) {
                printf("Kalan hakkınız: %d\n", i - 1);
            } else {
                printf("Şifre deneme hakkınız bitti.\n");
            }
        }
    }

    return 0;
}
