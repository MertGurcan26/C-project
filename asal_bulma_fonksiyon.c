#include <stdio.h>
#include <stdlib.h>

void asal()
{
   int n, i=3, sayac,c;

   printf("kac tane asal sayi istiyorsunuz");
   scanf("%d",&n);

   if(n>=1){
    printf("ilk %d asal sayinin listesi:\n " , n);
    printf("2\n");
   }
   for(sayac=2;sayac<=n;)
   {
       for(c=2;c<=i-1;c++)
       {
           if(i%c==0)
            break;
       }
       if(c==i){

        printf("%d\n" , i);

       sayac++;
       }
       i++;

   }

}

int main()
{
asal();
    return 0;
}
