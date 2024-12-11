#include <stdio.h>
#include <ctype.h>
long faktorielrecursive(long sayi);
long faktorielIterative(long sayi);
int main()
{
int i;

printf("dongu yontemiyle ilk 10 sayinin faktoriyeli\n");
for(i=0;i<10;i++)
{
    printf("%d! = %d\n" , i , faktorielIterative(i));
}

printf("\nozyineleme yontemiyle ilk 10 sayinin faktoriyeli\n");
for(i=0;i<10;i++)
{
    printf("%d! = %d\n" , i , faktorielrecursive(i));
}
}
//bir sayinin faktoriyelini dongu(Iterative) ile bulan fonksiyon
long faktorielIterative(long sayi){
if(sayi==0 || sayi == 1)
    return 1;
long i , sonuc = 1 ;
for(i=1 ; i<=sayi;i++)
{
    sonuc = sonuc*i;
}
    return sonuc;

}
//bir sayinin faktoriyelini recursive(ozYineleme) ile bulan fonksiyon
long faktorielrecursive(long sayi)
{

    if(sayi==0 || sayi == 1)
    {
        return 1;
    }
    //sayinin faktoriyeli sayiyla sayinin bir eksiginin faktoriyelinin carpimidir
    long sonuc = sayi * faktorielrecursive(sayi-1);
    return sonuc;
}



