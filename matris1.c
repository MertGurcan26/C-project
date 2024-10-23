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
    int  matris[3][3] =
    {


        {1,1,1},
        { 2,2,2},


        {3,3,3}};


    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0 ; j < 3; j++)
        {

            printf("matris[%d][%d]= %d\n", i, j, matris[i][j]);
        }
    }

    return 0;
}
