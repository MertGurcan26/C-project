#include <stdio.h>

int main(void)
{
    int vize, finall;
    float ort;

    printf("Vize ve final notunu giriniz (0-100 arasi): \n");
    scanf("%d %d", &vize, &finall);

    // Check if the scores are within valid range
    if (finall < 0 || finall > 100 , vize < 0 || vize > 100) {
        printf("Gecersiz bir  not girdiniz. Lütfen 0 ile 100 arasında bir değer girin.\n");
        return 1; // Exit with error code
    }

    ort = (vize * 0.4) + (finall * 0.6);

    printf("Gecme notun: %2.7f\n", ort);
    printf("\nPress enter to exit.");


    return 0;
}

