#include<stdio.h>


int main(){
	int i;
	char n[]={'E','L','L','O','W','O','R','L','D','!','\0'};
	
	printf("H ");
	
	for(i=0;i<=9;i++){
		printf("%c ",n[i]);
	}	
	
	for(i=0;i<=9;i++){
		printf("\n%c",n[i]);
	}
	
	return 0;
}
