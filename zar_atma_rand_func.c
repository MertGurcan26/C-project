#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void zarat(int);


int main()
{
    int m;
    printf("\n kac atis yapacaksiniz?:");
    scanf("%d" , &m);
    zarat(m);
    return 0;
}
void zarat(int n)
{
    int i , k;
    int a = 0 , b = 0, c= 0, d=0, e = 0, f=0;
    srand(time(NULL));

    for(i=1;i<=n;i++)
    {
        k = 1 + rand()%6;
        printf("%d\n" , k);

    switch(k)
    {


    case 1: a++; break;
    case 2 : b++; break;
    case 3: c++; break;
    case 4: d++; break;
    case 5: e++ ; break;
    case 6: f++ ; break;
    }
 }
    printf("\n%d gelme sayiisi %d" , 1 , a);
    printf("\n%d gelme sayiisi %d" , 2 , b);
        printf("\n%d gelme sayiisi %d" , 3 , c);

            printf("\n%d gelme sayiisi %d" , 4 , d);
    printf("\n%d gelme sayiisi %d" , 5 , e);
        printf("\n%d gelme sayiisi %d" ,6 , f);



    return;
}
