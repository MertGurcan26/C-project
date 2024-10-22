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
    int  sayilar[5] = {[0 ... 4] = 5};

    printf("%d" , sayilar[3]);
    return 0;
}
