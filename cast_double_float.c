#include <stdio.h>
#include<locale.h>


int main()
{


float sayi1 = 7/3 ; // float sayi1 değişkenine atanmıştır öncelikle


float sayi2 = (float)(7/3);
// 7 ve 3 int olduğu için sonuc da int olacaktır
//dolayısıyla 2.33 olan değer 2 olarak float değişkenine atanır



float sayi3 = 7 / (float) 3;//3 değeri işlemden önce floata çeviriliyor

float sayi4 = (float) 7/3; // 7 değeri işlemden önce floata çevrilmiştir
//işlem önceki işlemle aynıdır ve sonuc 2.33olur

float sayi5 = (float) 7/(float) 3;
//işlemi garantiye alır işlemden önce çevirmeleri yapar ve sonuc 2.33olur

printf("%f\n" , sayi1);
printf("%f\n" , sayi2);
printf("%f\n" , sayi3);
printf("%f\n" , sayi4);
printf("%f\n" , sayi5);

double d1 = 5.3;
double d2 = 5.4;
double d3 = 5.5;

int toplam1 = (int) (d1 + d2 +d3); // önce toplayıp sonra int çeviriyor
int toplam2 = (int)d1 + (int)d2 + (int)d3; //önce int çevirip sonra topluyor

printf("%d\n" , toplam1);
printf("%d\n" , toplam2);
}



