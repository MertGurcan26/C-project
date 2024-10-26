#include <stdio.h>
#include<locale.h>
#include <ctype.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include <windows.h>

int main()
{
    system("chcp 65001  > nul");
    int dizi[4] = {12,10,9,3};
    int i , j , x;
    printf("sıralamadan once:\n");
    for (i = 0; i < 4 ; i++)
    {
        printf("%3d" , dizi[i]);

    }
    //sıralama başlıyor
    for(i = 0 ; i< 3 ; i++)
    {

        for(j = 0; j <3 - i; j++){
        //bir önceki eleman bir sonrakinden büüykse yer değiştirelim
            if(dizi[j] > dizi[j+1])
            {
                int gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }

        printf("\n%d. iterasyon\n" , i);
        for(x=0;x<4;x++)
        {
            printf("%3d" , dizi[x]);

        }
        }
        printf("\nsıralamadan sonra\n");
        for(i=0; i<4; i++)
        {
            printf("%3d" , dizi[i]);
        }


    return 0;

}
