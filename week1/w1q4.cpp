#include<stdio.h>

int main(){
	int para;
	printf("------Doviz kuru donusturucuye hosgeldiniz------\n");
	printf("\tLira miktarini giriniz:");
	scanf("%d",&para);
	
	printf("\tparaniz %.2f euroya\n",0.212*para);
	printf("\tparaniz %.2f dolara\n",0.253*para);
	printf("\tparaniz %.2f sterline esittir.",0.19*para);
	
	
	
	return 0;
}
