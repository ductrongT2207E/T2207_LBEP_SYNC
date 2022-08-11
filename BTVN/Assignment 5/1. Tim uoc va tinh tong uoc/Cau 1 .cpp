//1. Nhap 1 so n, tim cac uoc va tinh tong uoc cua n.
#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	int i;
	int z = 0;
	printf("Cac uoc cua %d la:",n);
	for(i=1;i<=n;++i){
		if(n%i==0){
		printf(" %d",i);
		z=z+i;}
		}
	printf("\nTong cac uoc cua %d la: %d\n",n,z);
}
