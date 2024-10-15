#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i ;
    int sayi = 0;

    printf("lütfen bir sayi giriniz");
    scanf("%d" , &sayi);
    printf("girdiğiniz sayiya kadar olan tek sayilar\n");

    for(i = 1; i<= sayi ; i+=2)
    {
        printf("%d\n" , i);
    }

return 0;
}
