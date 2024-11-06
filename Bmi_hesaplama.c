#include <stdio.h>
#include<math.h>
int main()
{
   float kilo , boy , bmi; 
   int yas;
   
   printf("yasınızı giriniz\n ");
   scanf("%d"  , &yas);
   printf("boyunuzu giriniz\n ");
   scanf("%f"  , &boy);
   printf("kilonuzu giriniz\n ");
   scanf("%f"  , &kilo);
   
   printf("vücut kütle endeksiniz = %.2f " , kilo/(boy*boy));
    return 0;
}
