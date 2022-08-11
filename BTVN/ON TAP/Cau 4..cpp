//4. Nhap vao 1 mang n so nguyen. Dao nguoc thu tu cac phan tu cua mang
#include<stdio.h>
int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int arr[n];
	int i;
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//Dao nguoc mang bang cach swap gia tri first va last
	int first=0;
	int last=n-1;
	int temp;
	while (first<last)
	{
		temp = arr[first];
		arr[first] = arr[last];
		arr[last] = temp;
		first++;
		last--;
	}
	printf("Mang dao nguoc la: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
