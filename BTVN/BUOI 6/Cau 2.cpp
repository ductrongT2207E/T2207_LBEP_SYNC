#include<stdio.h>
int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	
	//nhap gia tri vao mang
	int i;
	int ary[n];
	printf("nhap %d so = \n", n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&ary[i]);	
	}
	//tinh trung binh cong cac so le o vi tri chan
	int z = 0;
	int count = 0;
	for(i=0;i<n;i++)
	{
		if(ary[i]%2 == 1 && i%2==0)
		{
			z=z+ary[i];
			count++;
		}
	}
	printf("Trung binh cong cac so le la: %f",(float)z/count);
}
