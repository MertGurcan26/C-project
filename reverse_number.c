#include<stdio.h>
#include<stdbool.h>
int main()
{
	int num = 12548;
	int reversed = 0;
	
	while(num != 0)
	{
		reversed = reversed * 10 + num % 10;
		num/= 10;
	}
	printf("reversed number: %d\n" , reversed);
	
	return 0;
	
	
}
