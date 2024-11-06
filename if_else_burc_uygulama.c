#include <stdio.h>

int main()
{
    int ay, gün, yıl;
    
    // Doğum yılını tekrar tekrar sormak için döngü başlatıyoruz
    while (1) {
        printf("Doğum yılınızı giriniz: ");
        
        // Girişin geçerli olup olmadığını kontrol et
        if (scanf("%d", &yıl) != 1) {
            printf("Hatalı giriş. Lütfen bir sayı girin.\n");
            
            // Hatalı giriş olduğu için girdi tamponunu temizleyip yeniden denemek gerekiyor
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}  // Tampon temizleme
        } else {
            break; // Geçerli bir giriş yapıldığında döngüden çık
        }
    }

    printf("Doğum yılınız: %d\n", yıl);

  while (1) {
        printf("Doğum ayınızı giriniz: ");
        
        // Girişin geçerli olup olmadığını kontrol et
        if (scanf("%d", &ay) != 1) {
            printf("Hatalı giriş. Lütfen bir sayı girin.\n");
            
            // Hatalı giriş olduğu için girdi tamponunu temizleyip yeniden denemek gerekiyor
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}  // Tampon temizleme
        } else {
            break; // Geçerli bir giriş yapıldığında döngüden çık
        }
    }

    printf("Doğum ayınız: %d\n", ay);

while (1) {
        printf("Doğum gününüzü giriniz: ");
        
        // Girişin geçerli olup olmadığını kontrol et
        if (scanf("%d", &gün) != 1) {
            printf("Hatalı giriş. Lütfen bir sayı girin.\n");
            
            // Hatalı giriş olduğu için girdi tamponunu temizleyip yeniden denemek gerekiyor
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}  // Tampon temizleme
        } else {
            break; // Geçerli bir giriş yapıldığında döngüden çık
        }
    }

    printf("Doğum gününüz: %d\n", gün);
    
    printf("DOĞUM TARİHİNİZ : %d.%d.%d\t" , gün , ay , yıl);
    
    if(ay==12 && gün>=22 || ay==1 && gün<=19)
    {
            printf("ve burcunuz Oğlak" );

    }
      
    if(ay==1 && gün>=20 || ay==2 && gün<=18)
    {
            printf("ve burcunuz Kova" );

    }
      
    if(ay==2 && gün>=19 || ay==3 && gün<=20)
    {
            printf("ve burcunuz Balık" );

    }
      
    if(ay==3 && gün>=21 || ay==4  &&  gün<=20)
    {
            printf("ve burcunuz Koç" );

    }
      
    if(ay==4 && gün>=21 || ay==5  &&  gün<=20)
    {
            printf("ve burcunuz Boğa" );

    }
      
    if(ay==5 && gün>=21 || ay==6  &&  gün<=20)
    {
            printf("ve burcunuz İkizler" );

    }
      
    if(ay==6 && gün>=21 || ay==7  &&  gün<=22)
    {
            printf("ve burcunuz Yengeç" );

    }
      
    if(ay==7 && gün>=23 || ay==8  &&  gün<=22)
    {
            printf("ve burcunuz Aslan" );

    }
      
    if(ay==8 && gün>=22 || ay==9  &&  gün<=23)
    {
            printf("ve burcunuz Başak" );

    }
      
    if(ay==9 && gün>=23 || ay==10  &&  gün<=22)
    {
            printf("ve burcunuz Terazi" );

    }
      
    if(ay==10 && gün>=23 || ay==11  &&  gün<=23)
    {
            printf("ve burcunuz Akrep" );

    }
    
    
    
    
    return 0;
}
