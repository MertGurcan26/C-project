#include <stdio.h>
int main()
{
int i = 0;
while (i < 100) {
printf("%d ", i);
++i;
if(i >= 50)
    break;
}
return 0;
}
