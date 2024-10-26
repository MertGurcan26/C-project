#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>

int main()
{
    system("chcp 65001  > nul");
    int dizi[5];
    int tek,cift;
    printf("5 adet tam sayı giriniz:\n");
    for (int i = 0; i < 5; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    printf("\nÇift sayılar: ");
    for (int i = 0; i < 5; i++) {
        if (dizi[i] % 2 == 0) {
            printf("%d ", dizi[i]);
        }
    }
      printf("\nTek sayılar: ");
    for (int i = 0; i < 5; i++) {
        if (dizi[i] % 2 != 0) {
            printf("%d ", dizi[i]);
        }
    }

    return 0;

}
