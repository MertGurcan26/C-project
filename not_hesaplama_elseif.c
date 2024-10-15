#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>

int main()
{

    float vize  = 0;
    float finall = 0;
    float not = 0;
    printf("vize ve final notlarınızı giriniz");
    scanf("%f %f" , &vize , &finall);
    not = (vize + finall)/2;


    if(not >100 || not < 0)
    {
        printf("girdiginiz deger [0 , 100]  aralıgında olmali");

    }
    else if(not >=92){
        printf("Harf notunuz:AA");
    }
    else if(not >= 85){
        printf("Harf notunuz:BA");

    }
    else if(not >= 80){
        printf("Harf notunuz:BB");

    }
    else if(not >= 75){
        printf("Harf notunuz:CB");


    }
    else if(not >= 67){
        printf("Harf notunuz:CC");


}
 else if(not >= 58){
        printf("Harf notunuz:DC");
 }
         else if(not >= 50){
        printf("Harf notunuz:DD");
         }
        else{
            printf("Harf notunuz FF");
        }




   return 0;
}
