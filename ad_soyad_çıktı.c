#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL,"turkish");
   int yas;
   char ad[50] ,soyad[50];

   printf("Adinizi giriniz" );
   scanf("%s" , ad);
   printf("adınız %s" , ad);

   printf("\nsoyadinizi giriniz" );
   scanf("%s" , soyad);
   printf("soyadınız %s" , soyad);

   printf("\nyasınizi giriniz");
   scanf("%d" , &yas);
   printf("yasınız %d" , yas);
   printf("\nMERHABA %s %s" ,ad , soyad );
   return 0;
}
