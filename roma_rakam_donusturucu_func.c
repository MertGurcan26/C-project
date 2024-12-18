#include <stdio.h>

void roma_rakamlari(int sayi) {
    while (sayi >= 1000) { printf("M"); sayi -= 1000; }
    while (sayi >= 900) { printf("CM"); sayi -= 900; }
    while (sayi >= 500) { printf("D"); sayi -= 500; }
    while (sayi >= 400) { printf("CD"); sayi -= 400; }
    while (sayi >= 100) { printf("C"); sayi -= 100; }
    while (sayi >= 90) { printf("XC"); sayi -= 90; }
    while (sayi >= 50) { printf("L"); sayi -= 50; }
    while (sayi >= 40) { printf("XL"); sayi -= 40; }
    while (sayi >= 10) { printf("X"); sayi -= 10; }
    while (sayi >= 9) { printf("IX"); sayi -= 9; }
    while (sayi >= 5) { printf("V"); sayi -= 5; }
    while (sayi >= 4) { printf("IV"); sayi -= 4; }
    while (sayi >= 1) { printf("I"); sayi -= 1; }
    printf("\n");
}

int main() {
    int sayi;
    printf("1-3999 arasinda bir tam sayi girin: ");
    scanf("%d", &sayi);

    if (sayi < 1 || sayi > 3999) {
        printf("Gecersiz deger! Lutfen 1-3999 arasinda bir sayi girin.\n");
    } else {
        printf("Roma rakamlari: ");
        roma_rakamlari(sayi);
    }

    return 0;
}
