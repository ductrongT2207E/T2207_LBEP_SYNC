#include<stdio.h>

int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	int array[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i++){
		int m=array[i];
	if(m<=1)
	{
		printf("%d khong phai la so nguyen to\n",m);
	}
	else
	{	
		int count = 0;
		for(int i=2;i<=n;i++)
		{
			if(m%i==0)
			{
			count++;
			if(count > 1) break;
			}
		} 
		if(count == 1) printf("%d la so nguyen to\n",m);
		else printf("%d khong phai la so nguyen to\n",m);
	}
	}

}
