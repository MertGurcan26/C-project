#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{
   setlocale(LC_ALL ,  "turkish");
   char ch;
   ch = getche();
   printf("\n girdiginiz karakter : %c\n program sonlandı\n" , ch);


return 0;
}
