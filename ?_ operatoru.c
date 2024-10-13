#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{
 /* ? OPERATÖRÜ */
int x = 11 , y = 5 ,z = 0 , z1 = 0;

/*x değeri yden büyükse znin değeri x olsun aksi takdirde y olsun*/
z = x >  y ? x:y;
/*x yden kucukse z değeri x olsun aksi takdirde y olsun*/
z1 = x < y ? x:y;

printf("z %d\n" , z);
printf("z1 : %d\n"  ,z1);
return 0;
}
