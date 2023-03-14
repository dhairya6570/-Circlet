#include<stdio.h>

int main (){
	
	int r , c , k ;
	
	//FIRST HALF
	for(r=1 ; r<=5 ; r++){
		
		for(c=r ; c>=1 ; c--){
			
			printf("%d",c);
			
		}
		printf("\n");
	}
	
	//SECOND HALF
	for(r=4 ; r>=1 ; r--){
		
		for(c=r ; c>=1 ; c--){
			printf("%d",c);
		}
		printf("\n");
	}
	
	return 0 ;
}
