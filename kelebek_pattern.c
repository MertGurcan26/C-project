#include <stdio.h>

int main() {
    int n, i, j;

    // Kullanıcıdan boyut alıyoruz (kelebek büyüklüğü)
    printf("Kelebek deseni icin bir boyut girin: ");
    scanf("%d", &n);

    // Üst kanatlar
    for (i = 1; i <= n; i++) {
        // Sol üst kanat
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Orta boşluk
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Sağ üst kanat
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Alt kanatlar
    for (i = n; i >= 1; i--) {
        // Sol alt kanat
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Orta boşluk
        for (j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        // Sağ alt kanat
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
