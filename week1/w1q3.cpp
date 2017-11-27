#include<stdio.h>

int main(){
	
	int a,b,i,j;
	printf("number1:");
	scanf("%d",&a);
	printf("number2:");
	scanf("%d",&b);
	
	printf("number1 is: %d\t",a);
	printf("number2 is: %d\n",b);
	
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d / %d = %d",a,b,a/b);
	
	return 0;
}
