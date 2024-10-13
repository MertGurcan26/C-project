#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"turkish");
    float a, b, sonuc;
    int kalan;

    // Kullanıcıdan iki sayı al
    printf("İki sayı giriniz (bölmek istediğiniz sayılar): ");
    scanf("%f %f", &a, &b);

    // Bölme işlemi
    sonuc = a / b;

    // Kalan hesaplama (int türüne çevrilerek)
    kalan = (int)a % (int)b;

    // Sonuçları yazdırma
    printf("Sonuç (a / b) = %.2f\n", sonuc);
    printf("Kalan (a %% b) = %d\n", kalan);

    return 0;
}
