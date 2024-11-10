#include <stdio.h>

int main() {
    int yas;
    do
    {

        printf("yasiriniz giriniz");
        scanf("%d",&yas);
        if(yas>0 && yas<120){
                printf("yasınız = %d" , yas);
        }
        else{
            printf("geçersiz değer tekrar giriniz");

        }

    }
    while(yas < 0 || yas > 120);

    return 0;
}
