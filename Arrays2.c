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
    int  teksayilar[10] = {1,3,5,7,9,11,13,15,17,19};
    int i;
    for(i=0; i<10; i++)
    {
        printf("teksayilar[%d] = %d\n", i, teksayilar[i]);


    }
    int toplam = 0;
    i=0;

    do
    {
        toplam += teksayilar[i];
        i++;
    }
    while(i<=9);
    printf("dizinin elemanları toplamı %d", toplam);
    return 0;
}
