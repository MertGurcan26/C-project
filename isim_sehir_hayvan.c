#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Rastgele harf seçen fonksiyon
char randomChar() {
    return 'a' + rand() % 26; // 'a' ile 'z' arasında bir rastgele harf
}

int main() {
    // 20 hayvandan oluşan bir dizi
    char hayvan[20][20] = {
        "Aslan", "At", "Ayı", "Ahtapot", "Ağaçkakan", "Akbaba", "Akrep", "Akuçi",
        "Antilop", "Alabalık", "Arı", "Atmaca", "Anaconda", "Ayı balığı", "Anadolu Parsı",
        "Ankara Kedisi", "Ateş Böceği", "Ağustos Böceği", "Akumba", "Agama", "Alageyik"
    };

    // Rastgele sayılar için seed değerini başlat
    srand(time(NULL));

    // Rastgele bir harf seç
    char letter = randomChar();

    // Sonucu yazdır
    printf("Rastgele seçilen harf: %c\n", letter);

    // Kullanıcıdan isim girmesini istiyoruz
    char isim[30]; // Yeterli boyutta bir dizi tanımlanmalı
    printf("Bir isim giriniz: ");
    scanf("%s", isim); // Kullanıcının girdiği ismi alıyoruz

    // Kullanıcı tarafından girilen ismi yazdırıyoruz
    printf("Girilen isim: %s\n", isim);

     // Kelimeyi diziyle karşılaştırma
    int found = 0;  // Eşleşme bulup bulmadığımızı belirleyecek bayrak

    // Dizideki kelimeleri kontrol et
    for (int i = 0; i < 20; i++) {
        if (strcmp(hayvan[i], isim) == 0) {  // Kelime eşleşiyorsa
            found = 1;
            break;
        }

    }

    if (found) {
        printf("Tebrikler! Girilen isim dizide mevcut.\n");
    } else {
        printf("Girilen isim dizide bulunamadı.\n");
    }

    return 0;
}
