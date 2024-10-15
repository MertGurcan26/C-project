#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>

int main()
{
srand(time(NULL));
char enter;
do{
int zar1 = (rand()%6) +1;
int zar2 = (rand()%6) +1;
//rand()%6 0 ile 5 arasında sayı üretmemizi sağlar
// +1 ise 1 ile 6 arasında sayı elde etmemizi sağlar
printf("zar 1 = %d" , zar1);
printf("\nzar 2 = %d" , zar2);
enter = getchar();
getchar();
if(zar1 == zar2){
    printf("\ntebrikler çikolata kazandını!!");
    break;
    
    }
    else
        printf("\nTEKRAR DENEYİNİZ");

}
while (enter == '\n');
   return 0;
}
