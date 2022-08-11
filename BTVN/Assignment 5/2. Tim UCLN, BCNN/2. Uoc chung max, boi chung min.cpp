#include<stdio.h>
int main(){
	int a,b;
	printf("nhap a = ");
	scanf("%d", &a);
	printf("nhap b = ");
	scanf("%d", &b);
	
	int ucln;
	for(int i=a;i>0;i--){
		if(a%i==0 && b%i==0){
			ucln = i;
			break;
		}
	}
	printf("UCLN cua %d va %d la: %d",a,b,ucln);
	printf("\nBCNN cua %d va %d la: %d",a,b,(a*b)/ucln);
}
