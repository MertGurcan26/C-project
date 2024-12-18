#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void zarat(int);


int main()
{
    int sayac = 0, sayi ,birler , onlar ,yuzler  , binler , toplam , carpim;
    printf("3 basamakli mulayim sayilar\n");

    for(sayi = 100;sayi<1000;sayi++){
        birler = sayi%10;
        onlar = (sayi/10)%10;
        yuzler = (sayi/100)%10;
        toplam  = birler + onlar + yuzler ;
        carpim = birler * onlar * yuzler  ;

        if(sayi==toplam*carpim){
                            printf("%d\n" , sayi );

        sayac++;
        }
}
printf("toplam %d tane \n" , sayac);

return 0;

}
