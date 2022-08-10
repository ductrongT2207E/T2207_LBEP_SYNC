//5. Nhap 1 mang n so nguyen. Tim gia tri xuat hien nhieu nhat trong mang do
#include<stdio.h>
int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int count=0;
	int kiluc;
	int most;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (arr[j] == arr[i])
			{
				count++;
				if (count>kiluc)
				{
					kiluc = count;
					most = arr[i];
				}
			}				
		} count = 0;
	} printf("gia tri xuat hien nhieu nhat trong mang la: %d",most);
}
//chua giai quyet duoc truong hop co 2 gia tri cung xuat hien nhieu lan nhat
