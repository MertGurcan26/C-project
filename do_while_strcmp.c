#include <stdio.h>
#include <string.h>

int main() {
    char sifre[20];

    do {
        printf("Şifre girin: ");
        scanf("%s", sifre);

        if (strcmp(sifre, "1234") == 0) { //strcmp = İki string'in tamamen aynı olup olmadığını kontrol etmek için.

            printf("Giriş başarılı!\n");
            break;
        } else {
            printf("Yanlış şifre, tekrar deneyin.\n");
        }

    } while (1); // Sonsuz döngü; doğru şifre girilene kadar devam eder

    return 0;
}
