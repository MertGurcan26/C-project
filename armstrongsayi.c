#include<stdio.h>
int main(){
	int n,r,sum=0,tem;
	printf("sayi girin=");
	scanf("%d" , &n);
	tem = n;
	while(n>0){
	r= n%10;
	sum  = sum+(r*r*r);
	n = n/10;}
	if(tem == sum)
	{
		printf("armstrong sayi");
	}
	else
	{
		printf("armstrong sayisi degil");
	}
	
	
}
