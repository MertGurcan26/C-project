#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
int i , sayi ;
float kareler[4];

for (i = 0 ; i < 4 ; i++) {
    printf("sayilari giriniz:");
scanf("%d" , &sayi);
kareler[i] = sayi*sayi;
}
for (int j = 0 ; j < 4 ; j++) {
printf("%f\n",kareler[j]);
}
float toplam = 0;
for (i = 0 ; i < 4 ; i++)
toplam +=kareler[i];
float ortalama = toplam / 4.0;
printf("toplam: %f\n", toplam);
printf("ortalama: %f\n",ortalama);
}
