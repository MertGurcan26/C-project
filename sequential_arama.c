#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>

int main()
{
    system("chcp 65001  > nul");
    int aranansayi;
    int dizi[15] = {2,7,23,67,123,9,21,0,124,789,34,8,1235,14,5};
    int bulundu = 0;
    printf("dizi icinde arayacagınız sayiyi giriniz:");
    scanf("%d" , &aranansayi);

    int i;
    for(i=0;i<15;i++){
        if(dizi[i] == aranansayi){
            bulundu = 1;
            break;

        }
    }
// bulundu değeri true'dur ve bulunduğunda 1 döner
    if(bulundu){
        printf("bulundu: dizinin %d. elemanı aranan degere eşit\n" , i);
            }

        else
        {

            printf("aradiginiz eleman dizide bulunamadı\n");
        }
    return 0;
}
