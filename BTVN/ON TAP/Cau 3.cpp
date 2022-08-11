//3. Nhap 1 so n (so tu nhien). Tim so dung o vi tri thu n trong day so Fibonaci.
#include<stdio.h>
int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	
	if (n==1 || n==2) printf("So thu %d trong day so Fibonaci la: 1",n);
	else
	{
		int xn;
		int prex1=1;
		int prex2=1;
		for(int i=3;i<=n;i++)
		{
			xn = prex1 + prex2;
			prex1 = prex2;
			prex2 = xn;
		}
		printf("So thu %d trong day so Fibonaci la: %d",n,xn);
	}
	
}
