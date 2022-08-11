//3. Tìm uoc chung lon nhat cua 2 so
#include<stdio.h>
int UCLN(int a, int b)
{
	for(int i=a;i>0;i--)
	{
		if(a%i==0 && b%i==0) 
		return i;
	}
} 

int main()
{
	int a,b;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	
	printf("UCLN cua %d va %d la: %d",a,b,UCLN(a,b));
}
