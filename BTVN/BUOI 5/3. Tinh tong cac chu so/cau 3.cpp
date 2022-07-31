#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int i;
	int z=0;
	printf("Tong cac chu so cua %d la: ",n);
	while(n>0){
		i=n%10;
		z=z+i;
		n/=10;
	}  
	printf("%d",z);
}
