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
    float dizi[10] = {0,1,2,3,4,5,6,7,8,9};
    int i , x , y;
    int toplam = 0;


    for(int i = 0;i<10;i++)
    {

        toplam += dizi[i];
        if(toplam==45)
            break;
        printf("%d\n" , toplam);

    }

    printf("dizinin elemanları toplamı : %d" , toplam);
    return 0;

}
