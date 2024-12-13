#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

int getmaxelement(int[]);
int size;


int main()
{
int arry[MAX],max,i;
printf("array uzunlugu:");
scanf("%d" , &size);

printf("array %d ogelerini giriniz " , size);
for(i=0;i<size;i++)
    scanf("%d" , &arry[i]);


    max=getmaxelement(arry);

    printf("array en buyuk ogesi %d" , max);
    return 0;
}




int getmaxelement(int arry[])
{
    static int i=0,max=-9999;

    if(i<size)
    {
        if(max<arry[i]){


            max=arry[i];
            }
        i++;
        getmaxelement(arry);
    }
    return max;
}
