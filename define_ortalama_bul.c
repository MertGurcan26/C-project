#include <stdio.h>
#include<stdlib.h>
#define NOTSAYISI 5

void kullanicadanotlariokui(int[] , int);
double ortalamabul(int[] , int);

int main(int argc , const char * argv[])
{

    int notlar[NOTSAYISI];
    kullanicadanotlariokui(notlar,NOTSAYISI);
    double ortalama = ortalamabul(notlar,NOTSAYISI);
    printf("girdiginiz degerler ortalamasi = %.2f\n" , ortalama);



}

//parametre olan dizininin icerigini doldur

void kullanicadanotlariokui(int notlar[], int sayi)
{

    int i;
    for(i=0;i<sayi;i++)
    {

        printf("%2d. sayiyi giriniz:" , i+1);
        scanf("%d" , &notlar[i]);

    }
}
double ortalamabul(int notlar[] , int sayi)
{

    double toplam = 0;
    int i;
    for(i=0;i<sayi;i++)
    {

        toplam+=notlar[i];

    }
    return (double) toplam / (double) sayi;
}
