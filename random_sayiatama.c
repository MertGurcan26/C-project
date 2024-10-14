#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>

int main()
{
   setlocale(LC_ALL,"turkish");
//rastgele sayi üretimi için başlangıc sayisini zamana bagla
srand(time(NULL));
float bakiye = (float) (rand() %2000);
float cekilecek = 0;

printf("su anki bakiyeniz %.2f\n" , bakiye);
printf("cekilen para miktarı : %.2f\n" , cekilecek);
printf("cekmek istedipininz miktarı yazın");
scanf("%f" , &cekilecek);

if(cekilecek <= bakiye){
    bakiye = bakiye - cekilecek;
    printf("cekilen para miktarı %.2f\n" , cekilecek);
    printf("kalan para miktarı : %.2f\n" , bakiye);

}

printf("program sonlandı");

   return 0;
}
