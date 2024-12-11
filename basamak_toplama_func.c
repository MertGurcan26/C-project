#include <stdio.h>
#include <math.h>
int bastoplam(int n)
{

    n = fabs(n);
    int toplam = 0;

    while(n>0)
    {

        toplam += n%10;
        n/=10;

    }

    return toplam;

}

int main() {

int n;
a:
printf("bir sayi giriniz");
scanf("%d" , &n);
if(n>=0)
{

printf("basamaklarin toplami = %d\n" , bastoplam(n));

}else
printf("pozitif gir");
goto a;

return 0;
}
