#include <stdio.h>

void shiftArray(int arr[], int size, int num_shifts) {
    for (int shift = 0; shift < num_shifts; shift++) {
        int temp = arr[size - 1]; // Son elemanı sakla
        for (int i = size - 1; i > 0; i--) {
            arr[i] = arr[i - 1]; // Elemanları bir sağa kaydır
        }
        arr[0] = temp; // İlk elemanı sona taşı
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num_shifts; // Kaç kere kaydırmak istediğiniz
    printf("kac kere kaydırmak istiyorsun");
    scanf("%d" , &num_shifts);
    shiftArray(arr, size, num_shifts);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
