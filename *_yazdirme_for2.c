#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>


int main() {
    int sayi;

    // Kullanıcıdan bir sayı al
    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    // Sayıdan 1'e kadar yıldızları yazdır
    for (int i = sayi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) { // İç döngü yıldız sayısını belirler
            printf("* ");
        }
        printf("\n"); 

    return 0;
}
