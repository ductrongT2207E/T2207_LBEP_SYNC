//4. Cho so nguyen duong n. Hay tim chu so dau tien cua n.
#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	printf("Chu so dau tien cua n la: ");
	int i;
	while (n>0){
		i=n%10;
		n/=10;
	}
   printf("%d",i);
}
