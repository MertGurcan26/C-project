#include <stdio.h>
#include <ctype.h>
int main()
{
int ch;
printf("bir karakter girin : ");
ch = getchar();
if (isupper(ch)){
printf("%c buyuk harf!\n", ch);
}
else
printf("%c buyuk harf degil!\n", ch);

return 0;
}
