#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{
int a = 45,b=2;
a += b; // a=a+b;
b += 3; //b= b+3;
printf("a=%d,b=%d\n" , a,b);
}

 // kendisinden çýkarma , toplama,  çarpma , bölme ve yeniden kendine atama

int main()
{
int a1 = 45,b1=2;
a1 -= b1; // a1=a1-b1;
b1 -= 3; //b1= b1-3;
printf("a1=%d,b=%d\n" , a1,b1);
}


//    "/="   böl ve ata fonksiyonu
//     "%="  böl ve kalanýný ata fonksiyonu

// "!=" solundaki ver sağındaki değerleri karşılaştırır iki değer birbirinden farklıysa
//true aynıysa birbirine eşitse false değerini döndürür


// "!" (not)değil operatörü ifadeden sonra gelen ifade true ise sonuç false olur aksi durumda sonuç true olur
// "&&" and(ve) operatörü sağındaki ve solundaki ifadeden ikisi de true ise sonuç true olur diğer bütün durumlarda sonuç false olur

// || or(veya) operatorü sağındaki ve solundaki ikisi de false ise false döner diğer bütün durumlarda truedur
// xor operatorü(^) sağındaki ve solundaki ifade birbirinden farklı ise sonuç true olur eğer ifade birbirinin aynısı ise false olur
