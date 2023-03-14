#include<stdio.h>

int main (){
	
	int r , c , k ;
	
	for(r=1 ; r<=5 ; r++){
		
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
