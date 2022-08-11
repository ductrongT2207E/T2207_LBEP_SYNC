//4. Nhap 1 so nguyen n, tim so dao nguoc cua n.
#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	printf("So dao nguoc cua n la: ");
	while (n>0){
		printf("%d",n%10);
		n/=10;
	}
   
}
