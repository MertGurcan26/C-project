#include <stdio.h>
#include<stdlib.h>
int bolunebilirmi(int bolunen , int bolen)
{

    if(bolunen%bolen==0)
        return 1;
    else
        return 0 ;
}
int okekbul(int sayi1,int sayi2)
{

    int kucuksayi = sayi1;
    int buyuksayi = sayi2;
    if(sayi2<buyuksayi)
        buyuksayi=sayi2;
        kucuksayi = sayi1;
        if(bolunebilirmi(buyuksayi,kucuksayi))
        //kalan 0 olursa ikisinin bolumunden buyuk sayi okekdir

    return buyuksayi;
    //eger kalan 0 degilse buyuksayinin 2 katindan baslayarak katlari alinabilir
    //bolunup bolunmedigine bakilir
for(int i = buyuksayi*2 ;;i+=buyuksayi)

        if(bolunebilirmi(i,sayi1)==1 && bolunebilirmi(i,sayi2)==1){
            return i;
        }

        return 0;
}

int main()
{
  int sayi1,sayi2;
  printf("iki sayi giriniz:") ;
  while(1){
        if(scanf("%d %d" , &sayi1 , &sayi2)==2 && sayi1>0 && sayi2 > 0){//iki sayi olursa dogrulama 2ye esitlenir
       //tam sayi girilmesi icin yapilan bir islemdir
                printf("Ebob =  %d " , okekbul(sayi1,sayi2));
  break;

   }
    else{

printf("lutfen pozitif  tamsayilar giriniz\n");
break;


         }

  }

return 0;

}

