#include <stdio.h>

void sayi_piramit(int satir) {
    for (int i = 1; i <= satir; i++) {
        // 1. Boşlukları yazdır
        for (int j = 1; j <= satir - i; j++) {
            printf(" ");
        }
        // 2. Artan sayıları yazdır
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // 3. Azalan sayıları yazdır
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        // 4. Yeni satıra geç
        printf("\n");
    }
}

int main() {
    int satir;
    printf("Piramit yuksekligini girin: ");
    scanf("%d", &satir);

    sayi_piramit(satir);

    return 0;
}
