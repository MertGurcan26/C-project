#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USER_COUNT 100
#define MAX_NAME_LENGTH 50
#define FILE_NAME "users.txt"

// Saç rengi ve göz rengi enum tanımlamaları
enum HairColor { YELLOW = 1, BLACK, BROWN, RED };
enum EyeColor { BLUE = 1, GREEN, BROWN_EYE, GRAY };

// Kullanıcı yapısı
typedef struct {
    char name[MAX_NAME_LENGTH];
    enum HairColor hairColor;
    enum EyeColor eyeColor;
} User;

User users[MAX_USER_COUNT];
int userCount = 0;

// Kullanıcıya seçenekler sunan fonksiyonlar
void printHairColors() {
    printf("Sac rengini secin:\n");
    printf("1 - Sari\n");
    printf("2 - Siyah\n");
    printf("3 - Kahverengi\n");
    printf("4 - kizil\n");
}

void printEyeColors() {
    printf("Goz rengini secin:\n");
    printf("1 - Mavi\n");
    printf("2 - Yesil\n");
    printf("3 - Kahverengi\n");
    printf("4 - Gri\n");
}

// Kullanıcıyı dosyaya kaydeden fonksiyon
void saveUserToFile(User user) {
    FILE *fp = fopen(FILE_NAME, "a"); // Dosyayı ekleme modunda aç
    if (fp == NULL) {
        perror("Dosya acılamadı");
        exit(1);
    }
    fprintf(fp, "%s %d %d\n", user.name, user.hairColor, user.eyeColor);
    fclose(fp);
}

// Dosyadan kullanıcıları okuyan fonksiyon
void loadUsersFromFile() {
    FILE *fp = fopen(FILE_NAME, "r"); // Dosyayı okuma modunda aç
    if (fp == NULL) {
        printf("Henuz kayitli bir kullanici yok.\n");
        return;
    }
    User user;
    while (fscanf(fp, "%s %d %d", user.name, (int *)&user.hairColor, (int *)&user.eyeColor) != EOF) {
        users[userCount++] = user;
    }
    fclose(fp);
}

// Uyumluluğu kontrol eden fonksiyon
void findCompatibleUser(enum HairColor hairColor, enum EyeColor eyeColor) {
    int found = 0;
    printf("Uyumlu kişi:\n");
    for (int i = 0; i < userCount; i++) {
        if (users[i].hairColor == hairColor && users[i].eyeColor == eyeColor) {
            printf("Ad: %s\n", users[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("Uyumlu bir kişi bulunamadı.\n");
    }
}

// Yeni kullanıcıdan bilgi alın ve kaydedin
void getUserInput() {
    User newUser;

    printf("adinizi girin: ");
    scanf("%s", newUser.name);

    printHairColors();
    int hairChoice;
    printf("Saç rengini seçin (1-4): ");
    scanf("%d", &hairChoice);
    newUser.hairColor = (enum HairColor)hairChoice;

    printEyeColors();
    int eyeChoice;
    printf("Göz rengini seçin (1-4): ");
    scanf("%d", &eyeChoice);
    newUser.eyeColor = (enum EyeColor)eyeChoice;

    users[userCount++] = newUser; // Hafızada sakla
    saveUserToFile(newUser);      // Dosyaya yaz
}
void clearAllData() {
    FILE *fp = fopen(FILE_NAME, "w"); // Dosyayı yazma modunda aç
    if (fp == NULL) {
        perror("Dosya silinemedi");
        exit(1);
    }
    fclose(fp); // Dosyayı hemen kapat
    userCount = 0; // Bellekteki kullanıcı sayısını sıfırla
    printf("Tum veriler basariyla silindi.\n");
}

int main() {
    loadUsersFromFile(); // Mevcut kullanıcıları dosyadan yükle

    int choice;
    do {
        printf("\n1. Yeni kullanici ekle\n");
        printf("2. Uyumlulugu kontrol et\n");
        printf("3. Tum kullanicilari listele\n");
        printf("4. Tum verileri sil\n");
        printf("0. cikis\n");
        printf("Seciminiz: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                getUserInput();
                break;

            case 2: {
                enum HairColor hairColor;
                enum EyeColor eyeColor;

                printHairColors();
                printf("Uyumlu saç rengini seçin (1-4): ");
                scanf("%d", (int *)&hairColor);

                printEyeColors();
                printf("Uyumlu göz rengini seçin (1-4): ");
                scanf("%d", (int *)&eyeColor);

                findCompatibleUser(hairColor, eyeColor);
                break;
            }

            case 3:{
                for (int i = 0; i < userCount; i++) {
                    printf("Ad: %s, Saç Rengi: %d, Göz Rengi: %d\n",
                           users[i].name, users[i].hairColor, users[i].eyeColor);
                }
                break;
        }
        case 4:{
    clearAllData();
    break;
        }


            case 0:
                printf("Programdan cikiliyor...\n");
                break;

            default:
                printf("Gecersiz secim, tekrar deneyin.\n");
        }
    } while (choice != 0);

    return 0;
}
