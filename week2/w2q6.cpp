#include<stdio.h>

int main(){
	int a,b,i;
	printf("Write two numbers:\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a*b;i++){
		if(i%a==0 && i%b==0){//iki sayýnýn ekoku en fazla iki sayýnýn çarpýmý olabilir
			printf("ekok is %d\n",i);
			break;
		}
	}
	(a>b)?i=a:i=b;//i'yi büyük sayýya eþitle
	for(;i>0;i--){
		if(a%i==0 && b%i==0){ //iki sayýnýn ebobu en fazla büyük olan sayý olabilir
			printf("ebob is %d",i);
			break;
		}
	}
	
	return 0;
}
