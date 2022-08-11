//2. Nhap vao mang n so nguyen va 1 so nguyen x. Hay tim gia tri trong mang 
//so gan gia tri x nhat.
#include<stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	//nhap gia tri vao mang
	printf("nhap %d so nguyen:\n",n);
	int i;
	int ary[n];
	for (i=0;i<n;i++)
	{
		scanf("%d", &ary[i]);
	}
	
	//nhap so x
	int x;
	printf("nhap so x = ");
	scanf("%d",&x);
	
	//tim so co gia tri xa x nhat
	int sogannhat = ary[0];
	int valuemin = abs(x-ary[0]);

	for (i=0; i<n; i++)
	{	
		if(abs(x-ary[i]) < valuemin)
		sogannhat = ary[i];
	}
	printf("so co gia tri xa x nhat la: %d",sogannhat);
}
