#include<stdio.h>

int main (){
	
	int n , i = 1 , sum = 0 ;
	
		printf("Enter a value to sum 1 to your valuve : ");
		scanf("%d",&n);
	
	while(i<=n){
		sum = sum + i;
		i++;	
	}
	
	printf("%d\n",sum);
	
	return 0;
}
