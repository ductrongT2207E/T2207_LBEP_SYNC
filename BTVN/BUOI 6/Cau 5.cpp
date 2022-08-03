//5. Nhap mang n so nguyen, tim so duong nho nhat.
#include<stdio.h>
int main ()
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
	
	//tim xem trong mang co so duong khong va gan min neu co;
	int count = 0;
	int min;
	for (i=0;i<n;i++)
	{
		if (ary[i]>0)
		{
			min=ary[i];
			count++;
		}
	}
		if (count == 0) printf("trong mang k co so duong");

	//tim so duong nho nhat trong mang	
	for (i=0;i<n;i++)
	{
		if (ary[i]>0 && ary[i]<min)
		{
			min=ary[i];
		}
	} 	
		if (count != 0) printf("so duong nho nhat trong mang la: %d", min);	
}
