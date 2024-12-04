#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;
a:
    // Kullanıcıdan asal sayıları aralığını alıyoruz
    printf("Asal sayilari bulmak icin bir aralik girin (baslangic ve bitis): ");
  scanf("%d %d", &start, &end);



if(end>start)
{
     // Başlangıçtan bitişe kadar her sayıyı kontrol et
    for(i = start; i <= end; i++) {
        // Asal sayı olup olmadığını kontrol et
        if(i <= 1) {
            continue; // 1 ve daha küçük sayılar asal değildir
        }

        isPrime = 1; // Assume i is prime unless proven otherwise

        // 2'den i-1'e kadar olan sayılarla bölelim
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0; // i asal değil
                break;
            }
        }

        // Eğer asal sayıyı bulursak yazdırıyoruz
        if(isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");



}
else
    printf("son sayi ilk sayidan buyuk olmak zorundadir\n");
    goto a;


    return 0;
}
