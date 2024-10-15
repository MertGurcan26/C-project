#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int sayi= 0;
do {
    printf("karekokunu almak istediginiz sayiyi giriniz\n");
    printf("(programdan cikmak icin 0 degerini giriniz:)");

    scanf("%d", &sayi);
    double root = sqrt((double) sayi);
    printf("--------------------\n");
    printf("girilen deger:%d\n" , sayi);
    printf("karekoku : %.2f" , root);
    printf("\n----------------\n");

    // kuallanıcı 0 girmediği takdirde döngü devam eder
    //0 değeri girilirse döngüden çıkalım

}
while(sayi != 0);
printf("programdan cikiliyor");
return 0;
}
