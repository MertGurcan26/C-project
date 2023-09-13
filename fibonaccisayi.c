#include<stdio.h>
int main(){
	int i,n;
	int a1 = 0 , a2 = 1;
	int nexterm = a1 + a2;
	
	 printf("terim sayisini girin: ");
	 scanf("%d" , &n);
	 printf("fibonacci serisi %d%d" , a1 , a2);
	 
	 for(i=3;i<=n;i++){
	 	printf("%d" , nexterm);
	 	a1 = a2;
	 	a2 = nexterm;
	 	nexterm = a1 + a2;
	 }
}
