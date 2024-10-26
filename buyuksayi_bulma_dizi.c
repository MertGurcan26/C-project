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

   int sayi;
   int dizi[10] = {25 ,22,17,19,47,3,5,98,124,10};
    printf("Dizi elemanları:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);  // Her bir dizi elemanını yazdırır
    }

   printf("\nbir sayi giriniz");
   scanf("%d" , &sayi);
   printf("girdiniz sayidan büyük elemanlar ");
   for(int i = 0; i <10 ; i++ ){


   if(dizi[i] > sayi ){
    printf("\n%d" , dizi[i]);
   }
   }
    return 0;

}
