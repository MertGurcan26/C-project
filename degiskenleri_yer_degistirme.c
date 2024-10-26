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
    int a = 5,b = 3;
    int gecici = a;
    a=b;
    b=gecici;

    printf("%d" ,a);
    return 0;
    //a=3 ve b=5 olur 
}
