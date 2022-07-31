#include<stdio.h>
int main(){
	int a;
	printf("nhap a = ");
	scanf("%d", &a);
	
	int b;
	printf("nhap b = ");
	scanf("%d", &b);
	
	int x = a;
	int y = b;
	while (a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	printf("Uoc chung lon nhat cua a va b la: %d",a);
	printf("\nBoi chung nho nhat cua va b la: %d",(x*y)/a);
}
