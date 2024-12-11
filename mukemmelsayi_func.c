#include <stdio.h>
#include <math.h>

void mukemmelsayilar(int n){
    for(int i=1;i<=n;i++)
    {

        int top=0;
        for(int j=1;j<=i/2;j++)
        {

            if (i%j==0) top+=j;
        }
        if(top==i) printf("%d mukemmel sayidir\n" , i);
    }

}
int main()
{
    int n;
    printf("bir sinir   girin");
    scanf("%d" , &n);
    mukemmelsayilar(n);

return 0;
}
