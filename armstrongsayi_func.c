#include <stdio.h>
#include <math.h>

int armstrongsayi(int n){
    int orijinal = n ,  toplam = 0;
    while(n >0)
    {

        int basamak =  n%10;
        toplam+= pow(basamak,3);
        n/=10;


    }
    return toplam==orijinal;

}

int main()
{
    int n;
    while(1)
    {
        printf("bir sayi giriniz");
scanf("%d" , &n);
if(armstrongsayi(n))
{
    printf("%d sayisi bir armstrong sayidir\n" , n);

}
else
    printf("sayi armstrong degildir\n");

    }

return 0;
}
