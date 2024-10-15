#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL,"turkish");
   int gun = -1;
   printf("lütfen gün değerini sayi olarak 1 ve 7 aralığında giriniz");
   scanf("%d" , &gun);

   switch(gun){
   case 1:
   printf("pazartesi\n");
   break;
   case 2:
       printf("sali\n");
       break;
       case 3:
       printf("çarş\n");
       break;
       case 4:
       printf("perş\n");
       break;
       case 5:
       printf("cuma\n");
       break;
       case 6:
       printf("cumartesi\n");
       break;
       case 7:
       printf("pazar\n");
       break;
       default:
        printf("girilen sayılar geçersiz");
        break;
   }
   return 0;
}
