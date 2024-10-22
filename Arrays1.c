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
    int  sayilar[5] = {0, 0, 0, 0, 0};
    sayilar[0] = 19;
    sayilar[1] = 23;

    sayilar[3] = sayilar[1] - 192;
    sayilar[0] + 7;
    sayilar[4] = 2 * sayilar[1] - 4;



    printf("%d\n", sayilar[0]);
    printf("%d\n", sayilar[1]);
    printf("%d\n", sayilar[2]);
    printf("%d\n", sayilar[3]);
    printf("%d\n", sayilar[4]);


    return 0;
}
