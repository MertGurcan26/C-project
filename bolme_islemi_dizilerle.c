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

   int dizi[10] = {25,22,19,17,19,3,98,5,125,10,47};
   printf("dizi elemanları :");
   for(int i=0;i<10;i++)
   {
          printf("  %d" , dizi[i]);
}


    printf("\nBir sayi giriniz");
    scanf("%d" , &sayi);
    printf("kalansız bölünen");
    for(int i=0;i<10;i++){
    if(dizi[i]%sayi==0)

    printf(" %d" , dizi[i]);

}

    return 0;

}
