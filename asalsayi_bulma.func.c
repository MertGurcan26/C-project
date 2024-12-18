#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void asalcarpanlaribul(int sayi)
{
    printf("%d sayisinin asal carpanlari :" ,sayi );
    for(int  i = 2;i<=sayi;i++)
    {
        while(sayi%i==0)
        {
            printf("%d\t " , i);
            sayi /= i;
        }
    }
    printf("\n");
}


int main()
{
   int sayi;
   printf("bir sayi giriniz:");
   scanf("%d" ,&sayi);
   asalcarpanlaribul(sayi);
return 0;

}
