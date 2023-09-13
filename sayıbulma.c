#include<stdio.h>

int main()
{
	int num1 = 5,num2 = 20,
	smallest;
	smallest = (num1<num2) ? num1 : num2;
	printf("smallest:%d\n" , smallest);
	return 0;
}
