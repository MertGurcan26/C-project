#include <stdio.h>
#include <ctype.h>

int main()
{
    int sessiz = 0, kucuk = 0, toplam = 0, ksesli = 0, bsesli = 0, sesli = 0, buyuk = 0;
    int say_a = 0, say_e = 0, say_u = 0, say_A = 0, say_E = 0, say_U = 0, say_o = 0, say_O = 0, say_i = 0, say_I = 0;
    char ch;

    printf("Karakter girin ('?' ile çıkabilirsiniz):\n");

    while (1) {
        scanf(" %c", &ch); // Yeni satır karakteri sorununu çözmek için boşluk ekledik
        if (ch == '?') {
            break; // '?' girilirse döngüden çık
        }

        if (isalpha(ch)) { // Sadece harfler üzerinde işlem yap
            toplam++;
            if (islower(ch)) {
                kucuk++;
                switch (ch) {
                    case 'a': say_a++; ksesli++; sesli++; break;
                    case 'e': say_e++; ksesli++; sesli++; break;
                    case 'i': say_i++; ksesli++; sesli++; break;
                    case 'o': say_o++; ksesli++; sesli++; break;
                    case 'u': say_u++; ksesli++; sesli++; break;
                    default: sessiz++;
                }
            } else if (isupper(ch)) {
                buyuk++;
                switch (ch) {
                    case 'A': say_A++; bsesli++; sesli++; break;
                    case 'E': say_E++; bsesli++; sesli++; break;
                    case 'I': say_I++; bsesli++; sesli++; break;
                    case 'O': say_O++; bsesli++; sesli++; break;
                    case 'U': say_U++; bsesli++; sesli++; break;
                    default: sessiz++;
                }
            }
        }

        // Her girişten sonra istatistikleri yazdır

    }
    printf("Toplam harfler: %d\n", toplam);
        printf("Büyük harfler: %d\n", buyuk);
        printf("Küçük harfler: %d\n", kucuk);
        printf("Sessiz harfler: %d\n", sessiz);
        printf("Büyük sesli harfler: %d\n", bsesli);
        printf("Küçük sesli harfler: %d\n", ksesli);

    return 0;
}
