#include <stdio.h>
#include<stdlib.h>
int bolunebilirmi(int bolunen , int bolen)
{

    if(bolunen%bolen==0)
        return 1;
    else
        return 0 ;
}
int obebbul(int sayi1,int sayi2)
{

    int kucuksayi = sayi1;
    if(sayi2<kucuksayi)
        kucuksayi=sayi2;


    for(int i = kucuksayi;i>0;i--)
        if(bolunebilirmi(sayi1,i)==1 && bolunebilirmi(sayi2,i)==1){
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
                printf("Ebob =  %d " , obebbul(sayi1,sayi2));
  break;

   }
    else{

printf("lutfen pozitif  tamsayilar giriniz\n");
break;


         }

  }

return 0;

}

