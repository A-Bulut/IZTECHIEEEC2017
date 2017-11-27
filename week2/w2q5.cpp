#include<stdio.h>

int main(){
	
	int a,b,i;
	int sum=0;
	scanf("%d",&a);
	b=a;
	for(i=1;i<a;i++){
		
		if(a%i==0){
			sum=sum+i;			
		}
		
	}
	if(sum==b){
		printf("omg %d is a perfect number\t",b);
	}		
	else printf("sorry this is not a perfect number");
	
	return 0;
}
