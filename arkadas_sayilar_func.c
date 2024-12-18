    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    int bolenlertoplami(int sayi)
    {

        int toplam = 0;
        for(int i = 1;i<=sayi/2;i++)
        {
                if(sayi%i==0)
                {
                    toplam += i;
                }
        }
        return toplam;
    }




    void arkadasmi(int sayi1,int sayi2)
    {

        if(bolenlertoplami(sayi1) == sayi2 && bolenlertoplami(sayi2) == sayi1)
        {
            printf("%d ve %d arkadas sayilardir " , sayi1 , sayi2);

        }
        else
            printf("%d ve %d arkadas sayi degillerdir" , sayi1 , sayi2);
    }
    int main() {
    int sayi1, sayi2;
    printf("Iki sayi girin: ");
    scanf("%d %d", &sayi1, &sayi2);
    arkadasmi(sayi1, sayi2);
    return 0;
}
