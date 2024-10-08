#include <stdio.h>
#include <ctype.h>
int main()
{
int ch;
printf("bir harf giriniz");
ch = getchar();

if(isalpha(ch))

    printf("alfabetik karakter girdiniz");


else
    printf("yanlis girdi");
    return 1;

return 0;
}
