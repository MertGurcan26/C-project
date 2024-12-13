  #include<stdio.h>
#include<stdlib.h>
#include<time.h>

int  ekok(int , int);

int main()
{

int a , b , i;
printf("iki pozitif tamsayi giriniz:");
scanf("%d%d" , &a, &b);


if(a>b)
{i = ekok(a,b);

}
else
     i  = ekok(b,a);


     printf("ekok =  %d" , i);
     return 0;
}
int ekok(int a , int b){

    static int temp = 1;

    if(temp % b == 0 && temp % a == 0)
        return temp;

    temp++;
    ekok(a,b);

    //Eğer temp Ekok değilse, temp bir artırılır ve ekok fonksiyonu tekrar çağrılır.
//Recursive çağrı (öz yinelemeli çağrı), Ekok bulunana kadar devam eder.
}

