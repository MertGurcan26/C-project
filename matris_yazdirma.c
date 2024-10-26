#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>


int main() {
    system("chcp 65001 > nul");
    int matris[3][3];  // 3x3'lük bir matris tanımlandı

    // Kullanıcıdan matris elemanlarını al
    printf("3x3'lük matrisin elemanlarını giriniz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    // Matris elemanlarını yazdır
    printf("\nGirilen matris:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}


