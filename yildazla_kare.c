#include <stdio.h>

int main() {
    int n, i, j;

    // Kullanıcıdan dörtgenin boyutunu alıyoruz
    printf("Dörtgenin boyutunu girin: ");
    scanf("%d", &n);

    // Dörtgenin her satırını yazdırmak için dış döngü
    for(i = 0; i < n; i++) {
        // Her satırdaki karakterleri yazdırmak için iç döngü
        for(j = 0; j < n; j++) {
            // Kenarları yıldız ile yazdırıyoruz
            if(i == 0 || i == n-1|| j == 0 || j == n-1) {
                printf("*");
            } else {
                printf(" "); // Diğer kısımlar boşluk olacak
            }
        }
        // Bir satır bittiğinde yeni satıra geçiyoruz
        printf("\n");
    }

    return 0;
}
