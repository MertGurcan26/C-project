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
    int dizi[25] = {12,15,18,25,33,46,47,49,50,54,57,59,61,63,66,68,71,74,78,81,83,88,90,94};
    int hedef;
    int solindis = 0;
    int bulundu = 0;
    int sagindis = 24;
    int ortaindis = 0;

    printf("dizi içinde arayacağınız sayiyi giriniz : " );
    scanf("%d", &hedef);
    while(bulundu == 0 && solindis <= sagindis)
    {
        ortaindis = (solindis + sagindis) / 2;
        if(hedef == dizi[ortaindis])
        {

            bulundu = 1;
            break;

        }
        else if(hedef < dizi[ortaindis])
        {

            sagindis = ortaindis - 1;

        }
        else if(hedef > dizi[ortaindis])
        {

            solindis = ortaindis + 1 ;

        }
    }
    if(bulundu)

        printf("bulundu dizinin %d. indisindeki deger aranan elemana eşittir\n", ortaindis);

        else
            printf("aradığınız eleman dizide bulunamadı");

    return 0;
}
