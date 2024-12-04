#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main () {


int n, i , j , a=1 ;
printf("pascal ucgen satir sayi gir ");
scanf("%d" , &n);


for(i=0;i< n;i++)
{
    for(j=0;j<n-i-1;j++)
    {

        printf(" ");

    }

    for(j=0;j<=i;j++)
    {
        if(j==0 || i==0)
            a=1;
            else
                a = a *(i-j+1)/j;
            printf("%10d" ,a);

    }
    printf("\n");
}
     return 0;
}

