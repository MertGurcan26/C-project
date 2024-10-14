#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL ,  "turkish");
   char ch;
   //klavyeden bir karakter oku ve entera basılmasını bekle
   printf("bir karakter giriniz ve enter tusuna basınız");
   ch = getchar();

   printf("girdiğiniz karakter : ");
   //okuduğun karakteri konsola yazdır

   putchar(ch);
   /*putchar(10) ifadesi bir alt satıra geçmeyi sağlar 10 değerinin karakter olarka karşılığı ascii tablosunda yer almaktadır*/
putchar(10);
return 0;
}
