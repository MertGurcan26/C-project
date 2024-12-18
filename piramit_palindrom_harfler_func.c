#include <stdio.h>

void harf_piramit(int satir) {
    for (int i = 1; i <= satir; i++) {
        // Boşlukları yazdır
        for (int j = 1; j <= satir - i; j++) {
            printf(" ");
        }
        // Artan harfler
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        // Azalan harfler
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
}

int main() {
    int satir;
    printf("Piramit yuksekligini girin: ");
    scanf("%d", &satir);

    harf_piramit(satir);

    return 0;
}
