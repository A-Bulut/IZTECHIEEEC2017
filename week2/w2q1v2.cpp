#include<stdio.h>


int main(){
	int a;
	int b=1;
	int flag=0;
	scanf("%d",&a);
	while(b<a-1){   
		b++;
		if(a%b == 0){
			flag=1;
			//printf("%d\n",b);    //bu yolla farklý bölenlerini de bulabiliriz
		}
	}
	if(flag==1){
		printf("sayi asal degil");
	}
	else	printf("sayi asal");

	
	return 0;
}
