#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int sayi = 0;
  int i , j;
  printf("bir sayi giriniz :");
  scanf("%d" , &sayi);

 for (i = 0; i<sayi; i++) {
    for(j = 0 ; j <=i ; j++)
    {
        printf("*");

    }
    printf("\n");
 }

return 0;
}
