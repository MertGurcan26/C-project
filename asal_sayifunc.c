#include <stdio.h>
#include<stdlib.h>
#include<math.h>

 asalmi(int sayi)
{
    if(sayi<2)
    {
        return 0;

    }
    for(int i=2;i<=sqrt(sayi);i++)
    {//asal sayi bulmak icin karekokune kadar kontrıl sagla
        if(sayi%i==0)
            return 0;


    }
  return 1; // hic bolen yoksa asaldır 1 doner

}

int main()
{
    int sayi;
 printf("bir sayi giriniz");
 scanf("%d" , &sayi);
 printf("%d" , asalmi(sayi));
}
