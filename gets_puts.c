#include <stdio.h>

int toplamayap(int deger1,int deger2)

{
    return deger1 + deger2;
}
int main()
{
    //kullanıcıdan veri alır printf benzer
    char kelime[10];
    puts("bir kelime giriniz");

    //kullanıcadan kelime okur ve kelime isimli diziye kopyalar
    gets(kelime);



    //kelimeyi ekrana basar
    puts("asagodaki kelimeyi girdiniz");
    puts(kelime);
    return 0;
}
