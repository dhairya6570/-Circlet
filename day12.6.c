#include<stdio.h>

int main (){
	
	int n , i = 1 ;
	
	printf("Enter a value to find even number from your value to 1 : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		if(n%2==0)
		
		printf("%d\n",n);
		n--;
	}
	
	return 0 ;
}
