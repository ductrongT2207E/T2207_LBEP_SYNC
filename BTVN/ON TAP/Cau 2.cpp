//Nhap 1 so n tu ban phim. kiem tra xem n co phai so nguyen to hay khong?
#include<stdio.h>
int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	if(n<=1)
	{
		printf("%d khong phai la so nguyen to",n);
	}
	else
	{	
		int count = 0;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
			count++;
			if(count > 1) break;
			}
		} 
		if(count == 1) printf("%d la so nguyen to",n);
		else printf("%d khong phai la so nguyen to",n);
	}
}
