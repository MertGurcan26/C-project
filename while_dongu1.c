#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>

int main()
{
int toplam = 0;
int sayac = 1;
while(sayac <= 10)
{

    toplam = toplam + sayac;
    sayac++;
    printf("\n %d" , sayac);
}
printf("sayilarin toplami: %d\n" , toplam);
   return 0;
}
