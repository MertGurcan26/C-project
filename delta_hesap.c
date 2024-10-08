
#include <stdio.h>
#include <math.h>
int main()
{
double a, b, c;
double delta;
printf("denklemin katsayilarini girin\n");
printf("a = ");
scanf("%lf", &a);
printf("b = ");
scanf("%lf", &b);
printf("c = ");
scanf("%lf", &c);
delta = b * b - 4 * a * c;
if (delta < 0)
printf("denkleminizin gercek koku yok\n");
else if (delta == 0) {
printf("denkleminizin tek gercek koku var\n");
printf("kok = %12lf\n", -b / (2 * a));
}
else {
double kokdelta = sqrt(delta);
printf("denkleminizin 2 gercek koku var\n");
printf("kok 1 = %12lf\n", (-b + kokdelta) / (2 * a));
printf("kok 2 = %12lf\n", (-b - kokdelta) / (2 * a));
}
return 0;
}
