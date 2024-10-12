#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "turkish");

    int a;
    char c;

    printf("Sayınızı giriniz: ");

    // Kullanıcıdan giriş al
    if (scanf("%d%c", &a, &c) != 2 || c != '\n') {
        printf("Hata: Lütfen geçerli bir tam sayı girin.\n");
    } else {
        if (a % 2 == 0)
            printf("Çift sayı\n");
        else
            printf("Tek sayı\n");
    }

    return 0;
}
