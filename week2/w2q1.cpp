#include<stdio.h>
#include<math.h>

int main(){
	int a;
	int b=1;
	int flag=0;
	scanf("%d",&a);
	if(a<2){
		printf("sayi asal degil");
	}
	else{
		while(b<sqrt(a)){
		b++;
			if(a%b == 0){
				flag=1;
				break;
			}	
		}
		if(flag==1){
			printf("sayi asal degil");
		}
		else printf("sayi asal");
	}

	
	return 0;
}
