#include <stdio.h>

int main() {
    int i = 0 , a = 1 , sayi ,ust=0;

    printf("fibonnaci serisinin ust limitini girin");
    scanf("%d" , &sayi);

    printf(" fibonnaci serisi : %d , %d" ,i , a );


    do{
       ust = a+i;
       if(ust > sayi)//ust girilen değeri geçerse döngü sonlandır
       break;

       printf(", %d" , ust);
       i = a;//değerleri birbirinin yerine koyarak seriyi devam ettirir
       a = ust;


    }
    while(1);//döngü sınırı aşılınca döngü sonlandırır

      return 0;
}

