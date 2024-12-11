#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int faktoriel(int n ){

if(n<=1) return 1;
 for(int i = 2;i<=n;i++)
 {
     n==1;

   n*=i;

 }
}

int main()
{

    int n;
    printf("bir sayi giriniz ");
    scanf("%d" , &n);
    printf("%d! = %d\n"  , n , faktoriel(n));

}
