#include<stdio.h>
#include<math.h>

int main(){
	int a,b,i,j=1,flag;
	scanf("%d",&a);
	if(a<=2) printf("there is no prime number under %d",a);
	for(i=2;i<a;i++){
		flag=0;
		for(j=2;j<sqrt(i);j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0) printf("%d ",i);	
	}
	
	return 0;
}
