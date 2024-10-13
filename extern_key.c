#include <stdio.h>
#include<locale.h>
#include "../dosya1.h"


extern int sayi1;
extern int sayi2;
int main(int argc, char ** argv[]) {

    printf("sayi1: %d , sayi2: %d" , sayi1 , sayi2);

    return 0;
}

