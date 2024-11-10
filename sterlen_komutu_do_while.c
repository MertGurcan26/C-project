#include <stdio.h>
#include <string.h>

int main() {
    char sifre[20];

    do {
        printf("Dört haneli bir şifre girin: ");
        scanf("%s", sifre);

        // Şifrenin uzunluğunu kontrol et
        if (strlen(sifre) != 4) {
            printf("Şifre dört haneli değil! Programdan çıkılıyor.\n");
            break;
        }

        // Şifre doğru mu kontrol et
        if (strcmp(sifre, "1234") == 0) {
            printf("Giriş başarılı!\n");
            break;
        } else {
            printf("Yanlış şifre, tekrar deneyin.\n");
        }

    } while (1); // Sonsuz döngü, doğru şifre girilene veya programdan çıkılana kadar devam eder

    return 0;
}
