#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zamanuret(int , int , int );

int main()
{
    srand(time(NULL));
    int saat, dakika , saniye;
    printf("zamani giriniz:(saat,dakika,saniye seklinde)\n" );
    scanf("%d %d %d" , &saat,&dakika,&saniye);//DIKKAT EGER SCANFDE %d SONRA BOSLUK KARAKTER VARSA 4 GİRDİ ALMAYİ BEKLER
    if(saat<24 && saat>=1 &&dakika<60 && dakika>=1 && saniye<60 && saniye> 1)
    {
        zamanuret(saat,dakika,saniye);

    }
    else
        printf("yanlis giris");
        return 0;


    return 0;


}
void zamanuret(int s,int dk,int sn)
{
    if(s>=0&&s<12)
    {
        printf("\nsabah");
        s = rand()%12;
    }

    else if(s==12)
    {
        printf("\nogle");
        s = 12;
    }
    if(s<18)
    {
        printf("\nogleden_sonra");
        s = 12 + rand()%7;

    }
    else if(s<=21)
    {
        printf("\naksam");
        s = 18 + rand()%4;
    }
    else{
        printf("\ngece");
        s = 21 + rand()%4;
    }
    dk = rand()%60;
    sn = rand()%60;

    printf("\nrasgele zaman : %d : %d :%d" , s , dk , sn);
    return ;
}
