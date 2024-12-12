#include <stdio.h>
#include<stdlib.h>

void MatrisIceriginiYazdir(int ikiboyutludizi[][3],int satirsayisi, int sutunsayisi);
//sadece sutun sayisini doldurmak yeterli olur bu sayede satir sayisini ayarlarken
//genislik saglanmis olur

int main(int argc,char** argv)
{

    int matris[3][3] =
    {
        {
            1, 1, 1
        }
        ,
        {
            2, 2, 2
        }
        ,
        {
            3, 3, 3
        }
        ,

    };
    MatrisIceriginiYazdir(matris,3,3);
    return 0;

}
void MatrisIceriginiYazdir(int ikiBoyutluDizi[][3] , int satirsayisi,int sutunsayisi)
{
    int i , j ;
    for(i=0;i<satirsayisi;i++)
    {
        for(j=0;j<sutunsayisi;j++)
        {
            printf("matris[%d][%d]=%d\n" , i , j , ikiBoyutluDizi[i][j]);
        }
    }
}
