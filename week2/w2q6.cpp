#include<stdio.h>

int main(){
	int a,b,i;
	printf("Write two numbers:\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a*b;i++){
		if(i%a==0 && i%b==0){//iki say�n�n ekoku en fazla iki say�n�n �arp�m� olabilir
			printf("ekok is %d\n",i);
			break;
		}
	}
	(a>b)?i=a:i=b;//i'yi b�y�k say�ya e�itle
	for(;i>0;i--){
		if(a%i==0 && b%i==0){ //iki say�n�n ebobu en fazla b�y�k olan say� olabilir
			printf("ebob is %d",i);
			break;
		}
	}
	
	return 0;
}
