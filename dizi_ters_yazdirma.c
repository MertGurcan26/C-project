#include <stdio.h>

int main() {
    int N = 4;               // Dizi uzunluğu
    int A[10];               // Diziyi tanımla (maksimum 10 eleman)
    int gecici;              // Geçici değişken (swap için)

    // Kullanıcıdan giriş al
    printf("%d tane sayi giriniz:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Diziyi ters çevir
    for (int i = 0; i < N / 2; i++) {
        gecici = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = gecici;
    }

    // Sonuçları yazdır
    printf("Ters cevrilmis dizi: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
