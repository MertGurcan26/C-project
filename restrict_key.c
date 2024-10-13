#include <stdio.h>
#include<locale.h>

int main(int argc,const char * argv[]) {
    int sayi1 = 5, sayi2 = 10;

    int * restrict ptr1;
    int * restrict ptr2;

    ptr1 = &sayi1;
    ptr2 = &sayi2;

    printf("sayi1 = %d , sayi2 = %d" , sayi1 , sayi2);

    *ptr1 = *ptr1 + 2;
    *ptr2 = *ptr2 + 2;
    *ptr1 = *ptr1 +10;
        printf("sayi1 = %d , sayi2 = %d" , sayi1 , sayi2);

    return 0;
}
