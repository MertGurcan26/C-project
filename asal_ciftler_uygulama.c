#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int is_prime(int num)
{

    if(num<2) return 0;//2den kucuk asal degil

    for(int i =2;i * i <= num;i++)
    {

        if(num % i == 0) return 0; //bolunurse asal degil
            }
            return 1; //asal
}

int main () {


int n , p = -1;
printf("ust sinir giriniz");
scanf("%d" , &n);


printf("asal ciftler:\n");

for(int i=2;i<=n;i++)
{

    if(is_prime(i)) //asal sayiyi kontrol et
    {

        if(p != -1 && i-p == 2) //fark ikiyse yazdir
        {

            printf("%d , %d \n " , p ,i);
        }
        p = i; //su anki asali sakla
    }
}
     return 0;
}

