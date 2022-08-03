//7. Nhap mang n so nguyen, tim chuoi so duong ma co tong lon nhat la bao nhieu.
#include<stdio.h>
int main()
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
	
	//tim tong so duong
	int tong=0;
	int kiluc=0;
	for (i=0; i<n; i++)
	{
		if(ary[i]>0)
		{
			tong+=ary[i]; 
			if(tong>kiluc){
				kiluc=tong;
			}
		}else{
			tong=0;
		}
	}
	printf("chuoi so duong co tong lon nhat la: %d",kiluc);
}
