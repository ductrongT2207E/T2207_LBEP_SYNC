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
	
	if(a<b){
		if(a<c){
			printf("a min");
		}else{
			printf("c min");
		}
	}else{
		if(b<c){
			printf("b min");
		}else{
			printf("c min");
		}
	}
	
	
	
}
