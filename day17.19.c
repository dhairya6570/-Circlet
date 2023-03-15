#include<stdio.h>

int main (){
	
	int r , c , k ;
	
	
	//FIRST HALF
	for(r=5 ; r>=1 ; r--){
		
		for(c=1 ; c<=r ; c++){	
			printf("%d",c);
		}
		
		for(k=4 ; k>=r ; k--){
			printf("  ");
		}
		
		for(c=r ; c>=1 ; c--){
			printf("%d",c);
		}
		
		printf("\n");
	}
	
	//SECOND HALF
	for(r=2 ; r<=5 ; r++){
		
		for(c=1 ; c<=r ; c++){		
			printf("%d",c);
		}
		
		for(k=4 ; k>=r ; k--){
			printf("  ");
		}
		
		for(c=r ; c>=1 ; c--){
			printf("%d",c);
		}
		
		printf("\n");
		
	}
	
	return 0 ;
}
