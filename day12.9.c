#include<stdio.h>

int main (){
	
	int n , i = 1 , factorial = 1 ;
	
		printf("Enter a value to sum 1 to your valuve : ");
		scanf("%d",&n);
	
	while(i<=n){
		factorial = factorial * i;
		i++;	
	}
	
	printf("%d\n",factorial);
	
	return 0;
}
