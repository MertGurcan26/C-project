#include <stdio.h>

int main() {
    int matris[3][3];
    int satirToplam[3] = {0, 0, 0};  // Satır toplamları için bir dizi
    int sutunToplam[3] = {0, 0, 0};  // Sütun toplamları için bir dizi

    // Kullanıcıdan matris elemanlarını al
    printf("3x3'lük matrisin elemanlarını giriniz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    // Satır ve sütun toplamlarını hesapla
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            satirToplam[i] += matris[i][j];  // Satır toplamına ekle
            sutunToplam[j] += matris[i][j];  // Sütun toplamına ekle
        }
    }

    // Satır toplamlarını yazdır
    printf("\nSatır Toplamları:\n");
    for (int i = 0; i < 3; i++) {
        printf("Satır %d toplamı: %d\n", i + 1, satirToplam[i]);
    }

    // Sütun toplamlarını yazdır
    printf("\nSütun Toplamları:\n");
    for (int j = 0; j < 3; j++) {
        printf("Sütun %d toplamı: %d\n", j + 1, sutunToplam[j]);
    }

    return 0;
}
