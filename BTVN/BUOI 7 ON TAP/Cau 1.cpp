//1. Nhap n sau do tinh S = 1 + 1/2 + 1/3 + ... + 1/n
#include<stdio.h>
int main ()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int i;
	float S=0;
	for(i=1;i<=n;i++)
	{
		S += 1/(float)i;
	}
	printf("S = %f",S);
}
