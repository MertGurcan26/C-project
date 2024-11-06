#include <stdio.h>

int main()
{
    float toplam_tutar, indirim_oranı = 0, indirim_miktari , odenecek_tutar;
    int uye , ilk_alısveris;
    
    printf("toplam tutarı girin: ");
    scanf("%f" , &toplam_tutar);
    
    printf("üye misiniz:(1 = evet  , 0 = hayır) ");
    scanf("%d" , &uye);
    
    printf("ilk defa mı alış veriş yapıyorsunuz(1 = evet , 0 = hayır )");
    scanf("%d" , &ilk_alısveris);
    
    if(toplam_tutar >= 1000 )
    {
        indirim_oranı = 20;
        
    }
    else if (toplam_tutar >= 750)
    {
        indirim_oranı = 15;
        
    }
    else if(toplam_tutar >= 500)
    {
        indirim_oranı = 10;
        
    }
    
    else if(toplam_tutar >= 250)
    {
        indirim_oranı = 5;
        
    }
    else{
        
    
    indirim_oranı = 0;
    }
    
    if(uye == 1)
    {
        indirim_oranı += 5;
        
        
    }
    
    if(ilk_alısveris == 1)
    {
        indirim_oranı += 10;
        
    }
    
    indirim_miktari = (toplam_tutar * indirim_oranı)/100;
    odenecek_tutar = toplam_tutar - indirim_miktari;
    
    
    printf("toplam indirim oranı : %.2f\n" , indirim_oranı);
    printf("indirim miktarı: %.2f\n" , indirim_miktari);
    printf("ödenecek toplam tutar : %.2f\n" , odenecek_tutar);
    
    
    return 0;
}
