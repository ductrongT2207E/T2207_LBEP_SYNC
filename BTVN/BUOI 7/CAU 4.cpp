//4. Cho mang n so nguyen, hay tim gia tri x sao cho doan [-x,x] tren truc so nguyen
//chua tat ca cac gia tri trong mang
#include<stdio.h>
#include<stdlib.h>
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
	
	int valuemin = abs(min-0);
	int valuemax = abs(max-0);
	if (valuemin>valuemax)
	{
		printf("khoang gia tri \[-x,x\] can tim la \[%d,%d]",-min,min);
	}else{
		printf("khoang gia tri \[-x,x\] can tim la \[%d,%d]",-max,max);
	}
}
