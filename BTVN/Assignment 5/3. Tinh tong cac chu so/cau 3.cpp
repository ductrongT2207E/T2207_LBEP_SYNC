#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int z=0;
	printf("Tong cac chu so cua %d la: ",n);
	while(n>0){
		z+=n%10;
		n/=10;
	}  
	printf("%d",z);
}
