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
    int  teksayilar[5];
    int i = 0;


    while(i<5)
    {
        printf("dizinin %d elemanını giriniz:", i + 1);
        scanf("%d", &teksayilar[i]);
        if ((teksayilar[i] % 2 ) == 0)

        {

            printf("uyarı:lütfen eleman değerini tek giriniz!!\n");
            continue;
        }
        i++;
    }

    printf("\n------------\n");
    printf("dizinin elemanları\n");
    printf("----------------\n");

    for(i=0; i<5; i++)
    {

        printf("tek sayilar[%d] = %d\n", i, teksayilar[i]);

    }



    return 0;
}
