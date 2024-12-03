#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main () {
    int i , randomsayi , toplam=0 , tahmin;
    srand(time(NULL));


    randomsayi = (rand()%100)+1; //1-100 arası rastgele sayi üretir


    do
    {
     a:   printf("tahmininiz olan sayiyi giriniz(1-100 arasinda)");
    if (scanf("%d" , &tahmin) == 1)

    {

       if(randomsayi==tahmin){
            printf("dogru\n");
            break;
        }
        else
            toplam++;
    }
    else
        printf("Gecerli bir deger giriniz");
    goto a;



    }while(randomsayi!=tahmin || tahmin>0 || tahmin<100);

    printf("%d denemede buldun" ,toplam );
    if(toplam<=3)
    {
        printf("TUM SANSINI BURADA KULLANDIN");
    }
    else if(toplam>3 || toplam<=10)
    {
        printf("FENA DEGİL");
    }
    else if(toplam>10)
    {
        printf("BAHTSIZ BEDEVI");
    }


     return 0;
}

