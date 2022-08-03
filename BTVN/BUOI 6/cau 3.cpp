//3. Nhap vao 1 mang so nguyen, sau do nhap 1 so x. Tim xem co x trong mang khong.
#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	
	//nhap phan tu vao mang
	int i;
	int ary[n];
	printf("nhap %d so:\n", n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&ary[i]);
	}
	
	//nhap 1 so x
	int x;
	printf("nhap x = ");
	scanf("%d", &x);
	
	//kiem tra xem x co thuoc mang hay khong
	int exist = 0;
	for(i=0;i<n;i++)
	{
		if(ary[i] == x)
		{
			printf("%d co thuoc mang\n",x); 
			exist++;
			break;
		}
	} 
		if (exist == 0)
		{
		printf("%d khong thuoc mang", x);
		}
}
