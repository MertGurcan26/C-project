#include <stdio.h>
#include<locale.h>
#include <ctype.h>

int main()
{

/* MANTIKSAL AND(&) OPERATÖRÜ */
    unsigned int a = 63; /* 0011 1111 = 63*/
    //2üssü 0 = 1 , 2üssü 1 = 2 , 2üssü 3 = 8 , 2üssü 4 = 16 , 2 üssü 5 = 32 , 2 üssü 6 * 0 = 0 , 2 üssü 7 *0 = 0dır
    unsigned int b = 15; /* 0000 1111 = 15*/
    unsigned int c = a & b; /* 0000 1111 = 15*/
    printf("(a & b) = %u\n" , c);
// çıktı (a & b) = 15 olur ve a ve b teker teker karşılaştıralarak
//bit üzerinden "c" değişkenine kaydedilmiştir
// karşılaştırılan iki bitten bir tanesi bile 0 olsa 0 sonucunu alırsınız


/*MANTIKSAL OR(|) OPERATÖRÜ*/

// solundaki ve sağındaki değişkenin üzerinde mantıksal "or" işlemi uygular
//a ve b bitleri teker teker karşılaştırılıp sonuc "d" değişkenine atanacaktır
// karşılaştırılan iki bitten bir tanesi bile 1 olması 1 sonucunu verir
// 0 sonucunu alabilmek için her iki bitin de 0 olması gerekir


    unsigned int a = 63; /* 0011 1111 = 63*/
    //2üssü 0 = 1 , 2üssü 1 = 2 , 2üssü 3 = 8 , 2üssü 4 = 16 , 2 üssü 5 = 32 , 2 üssü 6 * 0 = 0 , 2 üssü 7 *0 = 0dır
    unsigned int b = 15; /* 0000 1111 = 15*/
    unsigned int d = a | b; /* 0011 1111 = 63*/
    printf("(a | b) = %u\n" , d);
    // çıktı (a | b) = 63;


/*MANTIKSAL XOR(FARKLI) OPERATÖRÜ(^)*/

    unsigned int a = 63; /* 0011 1111* = 63*/
    //2üssü 0 = 1 , 2üssü 1 = 2 , 2üssü 3 = 8 , 2üssü 4 = 16 , 2 üssü 5 = 32 , 2 üssü 6 * 0 = 0 , 2 üssü 7 *0 = 0dır
    unsigned int b = 15; /* 0000 1111* == 15*/
    unsigned int e = a ^ b; /* 0011 0000 = 48*/ // farklı yerlerde 1 aynı yerde 0 yazdırır
    printf("(a^b) = %u\n" , e);
    // sağındaki ve solundaki bitler üzerinde mantıksal xor işlemi uygular
    // a ve b değişkenlerinin bitlerini teker teker karşılaştırır
    //eğer karşılaştırılan bitler farklıysa  1 sonucunu verir
    // aksi takdirde 0 sonucunu verir 2'lik düzende gösterimin birbirinden
    //farklı olduğu noktalarda xor operatörü 1 sonucunu vermiştir diğer
    //yerlerde 0 sonucunu vermiştir


    /*COMPLEMENT(TÜMLEME) OPERATÖRÜ(~)*/

    // ikilik tabandaki karşılığı 0 olan bitleri 1 yapar
    //1 olan bitleri ise 0 yapar

    unsigned char ch = 63; /* 0011 1111 = 63*/
    unsigned char tumleyen ~ch;/*1100 000 = 192*/
    printf("~%d = %d\n", ch , tumleyen);
    //çıktı = ~63 = 192



    /**/

    /*bit tabanlı sağa sola kaydırma operatörleri(<< , >>)*/

    unsigned int g = 8; /*0000 1000 = 8*/
    unsigned int saga1kaydir = g >> 1; /*0000 0100* = 4*/
    unsigned int saga1kaydir = g >> 2; /*0000 0010* = 2*/
    unsigned int saga1kaydir = g >> 3; /*0000 0001* = 1*/
    unsigned int saga1kaydir = g >> 4; /*0000 0000* = 0*/


    unsigned int g = 8; /*0000 1000 = 8*/
    unsigned int sola1kaydir = g << 1; /*0001 0000* = 16*/
    unsigned int sola2kaydir = g << 2; /*0010 0000* = 32*/
    unsigned int sola3kaydir = g << 3; /*0100 0000* = 64*/
    unsigned int sola4kaydir = g << 4; /*1000 0000* = 128*/

    // EĞER BİR SAYININ 2'LİK TABANDAKİ GÖSTERİMİNİ 1 BİT SOLA KAYDIRIRSAK
    //O SAYIYI 2 İLE ÇARPMIŞ OLURUZ
    //EĞER BİR SAYIYI 1 BİT SAĞA KAYDIRIRSAK SAYIYI 2YE BÖLMEK ANLAMINA GELİR



