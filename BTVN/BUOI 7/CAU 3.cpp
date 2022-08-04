//3. Cho mang n so nguyen, hay tim doan [a,b] tren truc so nguyen sao cho
//doan nay chua tat ca cac gia tri trong mang.
#include<stdio.h>
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
	
	
	//tim so nho nhat (a)
	int min = ary[0];
	for (i=0; i<n; i++)
	{	
		if(ary[i]<min)
		min=ary[i];
	}
	
	//tim so lon nhat (b)
	int max = ary[0];
	for (i=0; i<n; i++)
	{	
		if(ary[i]>max)
		max=ary[i];
	}
	
	printf("khoang gia tri \[a,b\] can tim la \[%d,%d]",min,max);
}
