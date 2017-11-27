#include<stdio.h>

int main(){
	
	int a,b,i,j;
	printf("number1:");
	scanf("%d",&a);
	printf("number2:");
	scanf("%d",&b);
	
	printf("number1 is:\n");
	printf("1");
	for(i=0;i<a-1;i++){
		
		printf("+1");		
	}
	printf("\nnumber2 is:\n");
	printf("%d",b);
	
	
	
	
	return 0;
}
