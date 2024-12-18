    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    void yazitura(int sayi)
    {
        srand(time(NULL));
        int deger , yazi = 0 , tura = 0;
        printf("kac kere atmak istiyorsunuz");
        scanf("%d" , &sayi);

        for(int i=1;i<=sayi;i++)
        {
            deger = rand()%2;
            if(deger==1)
            {
               printf("tura\n");
                tura++;
            }

            else
            {
                printf("yazi\n");
                yazi++;
            }

        }
    printf("yazi sayisi %d\n"  , yazi);
    printf("tura sayisi %d\n" , tura);


    }
    int main()
    {
       int sayi;
       yazitura(sayi);


    }
