#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void dizi()
{
    int d[4];
    srand(time(NULL));
    int i;
    printf("rasgele 4 sayi üretildi[1-10]arasinda\n");
    for(i=0;i<4;i++)
    {
        d[i] = rand()%10+1;
        printf("%d. sayi = %d\n" , i+1 , d[i]);
        for(int j=3;j<=i;j++)



    while(1)
    {
        int sayi;
    printf("bir sayi giriniz\n");
    scanf("%d" , &sayi);
        if(d[i]==sayi || d[i-1]==sayi || d[i-2]==sayi || d[i-3]==sayi)
        {
            printf("tebrikler kazandiniz\n");
    return 0;


        }

else
    printf("tekrar deneyiniz\n");
}

    }






    }


int main() {

dizi();

}
