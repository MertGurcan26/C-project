#include <stdio.h>

// İki sayının en büyüğünü bulan fonksiyon
int get_max2(int a, int b) {
    return (a > b) ? a : b;
}

// Üç sayının en büyüğünü bulan fonksiyon
int get_max3(int a, int b, int c) {
    return get_max2(get_max2(a, b), c);
}

int main() {
    int x, y, z;

    printf("İki sayı girin: ");
    if (scanf("%d%d", &x, &y) != 2) {
        printf("Geçerli iki sayı girmediniz.\n");
        return 1; // Hata durumu için 1 döner
    }
    printf("%d ve %d sayılarından büyüğü = %d\n", x, y, get_max2(x, y));

    printf("Üç sayı girin: ");
    if (scanf("%d%d%d", &x, &y, &z) != 3) {
        printf("Geçerli üç sayı girmediniz.\n");
        return 1; // Hata durumu için 1 döner
    }
    printf("%d, %d ve %d sayılarından en büyüğü = %d\n", x, y, z, get_max3(x, y, z));

    return 0;
}
