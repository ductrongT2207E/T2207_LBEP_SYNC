//1. Tinh tong cac chu so cua 1 so nguyen n
#include<stdio.h>
int tongChuSo(int n)
{
	int g = 0;
	while(n>0)
	{
		g += n%10;
		n/=10;
	}
	return g;
}

int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	printf("Tong cac chu so cua %d la: %d",n,tongChuSo(n));
}

