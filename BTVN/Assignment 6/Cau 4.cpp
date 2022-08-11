//4. Nhap mang n so nguyen, tim so le cuoi cung cua mang.
#include<stdio.h>
int main()
{//yeu cau nhap n so nguyen
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	//nhap n so nguyen
	printf("nhap %d so nguyen:\n",n);
	int i;
	int ary[n];
	for (i=0; i<n; i++)
	{
	scanf("%d", &ary[i]);
	}
	
	//tim so le trong mang
	int count = 0;
	int sole;
	for (i=0; i<n; i++)
	{
		if (ary[i] % 2 == 1)
		{
			sole = ary[i];
			count++;
		}
		
	}
		if(count ==0 ) printf("Trong mang ko co so le nao het tron!!");
		if(count !=0 ) printf("So le cuoi cung trong mang la: %d", sole);
}
