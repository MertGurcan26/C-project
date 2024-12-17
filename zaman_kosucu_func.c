#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void zamandonustur(int zaman);
int main()
{
    int ilk , iki, uc , saat , dak , sn;
    printf("ilk parkuur kac saniyede tamamladiniz");
    scanf("%d" , &ilk);
    printf("ikinci parkuur kac saniyede tamamladiniz");
    scanf("%d" , &iki);
    printf("ucuncu parkuur kac saniyede tamamladiniz");
    scanf("%d" , &uc);


    zamandonustur(ilk);
     zamandonusturi(iki);
      zamandonusturu(uc);

}

void zamandonustur(int zaman)
{
    int saat, dak , sn;
    saat = zaman/3600;
    dak = ((zaman - (saat * 3600))/60);
    sn = (zaman -  (saat*3600) - (60*dak));
    printf("ilk parkuru = %d saat %d  dakika %d  saniye kostunuz\n" , saat , dak , sn);

}
void zamandonusturi(int zaman)
{
    int saat, dak , sn;
    saat = zaman/3600;
    dak = ((zaman - (saat * 3600))/60);
    sn = (zaman -  (saat*3600) - (60*dak));
printf("iki parkuru = %d saat %d  dakika %d  saniye kostunuz\n" , saat , dak , sn);

}
void zamandonusturu(int zaman)
{
    int saat, dak , sn;
    saat = zaman/3600;
    dak = ((zaman - (saat * 3600))/60);
    sn = (zaman -  (saat*3600) - (60*dak));
      printf("uc parkuru = %d saat %d  dakika %d  saniye kostunuz\n" , saat , dak , sn);

}

