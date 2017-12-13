#include <stdio.h>

int main(){
  
    int i, n;
    int arr[100];

    printf("Kac sayi gireceginizi giriniz(1-100 arasi): ");
    scanf("%d", &n);

    for(i = 0; i < n; ++i) 
    {
       printf("\nSayi %d: ", i+1);
       scanf("%d", &arr[i]);
    }
    
	for(i = 1; i < n; ++i) //loop ile her sayýyý karþýlaþtýrarak en büyüðü bulalým 
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("\nEn buyuk sayi = %d", arr[0]);

    return 0;
}
