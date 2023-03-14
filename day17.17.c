#include<stdio.h>

int main (){
	
	int r , c , k ;
	
	//FIRST HALF
	for(r=1 ; r<=5 ; r++){
		
		for(k=4 ; k>=r ; k--){
			printf(" ");
		}
		
		for(c=1 ; c<=r ; c++){
			
			printf("%d",c);
			
		}
		
		printf("\n");
		
	}
	
	//SECOND HALF
	for(r=2 ; r<=5 ; r++){
		
		for(k=2 ; k<=r ; k++){
			printf(" ");
		}
		
		for(c=r ; c<=5 ; c++){
			printf("%d",c);
		}
		printf("\n");
	}
	
	return 0 ;
}
