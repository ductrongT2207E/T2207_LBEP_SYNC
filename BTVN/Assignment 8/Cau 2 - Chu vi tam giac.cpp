//2. Tinh chu vi tam giac
#include<stdio.h>
int pTamGiac(int a, int b, int c)
{
	if(a+b>c && a+c>b && b+c>a) 
	{
		int p = a + b + c;
		return p;
	}
	return 0;
}

int main()
{
	int a,b,c;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	printf("nhap c = ");
	scanf("%d",&c);
	
	int z = pTamGiac(a,b,c);
	if (z==0) 
	printf("3 so da nhap khong phai 3 canh tam giac");
	else 
	printf("Chu vi tam giac la: %d",z);
}
