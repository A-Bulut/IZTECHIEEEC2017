#include<stdio.h>

int main(){

	int a,i;
	scanf("%d",&a);
	
	for(i=2;i<=a;i++){
		
		if(a%i==0){
			a=a/i;
			printf("%d\t",i);
			i--;		
		}
		
	}

	return 0;
}
