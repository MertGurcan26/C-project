#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int geriyesay(int);


int main()
{
     int sayac;
    printf("bir sayi giriniz:");
    scanf("%d" , &sayac);

    geriyesay(sayac);

}
int geriyesay(int n){
n = n - 3;
printf("sayac = %d\n" , n+3);
if(n>=1)
    geriyesay(n);
return n ;

}
