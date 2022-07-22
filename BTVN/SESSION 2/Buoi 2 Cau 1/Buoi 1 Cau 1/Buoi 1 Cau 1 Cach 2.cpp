#include<stdio.h>
int main(){
	
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c=");
	scanf("%d",&c);
	
	int min = a;
	
	if(b < min) 
		min = b;
	if(c < min)
		min = c;
	printf("min=%d", min);
}
