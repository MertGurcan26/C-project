#include<stdio.h>

int main( )
{
    int i, j;
    for(i = 1; i < 10; i++)
    {
        printf("\n");
       
        for(j = i; j > 0; j--)
        {
            printf("%d", j);
        }
    }
}
