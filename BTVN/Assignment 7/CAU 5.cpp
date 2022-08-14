#include<stdio.h>
int kiemtra(int n,int a[],int k){
	for(int i=0;i<n;i++){
		if(a[i]==k) return 1;
	} return 0;
}

int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	//nhap gia tri vao mang
	printf("nhap %d so nguyen:\n",n);
	int temp;
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]= ",i);
		scanf("%d",&temp);
		if(kiemtra(n,a,temp)==1){
			printf("Gia tri bi trung vui long nhap lai!\n");
			i--;
		}
		else a[i]=temp;
	}
	printf("mang vua nhap la: ");
	for (int i=0;i<n;i++){	
		printf("%d ",a[i]);
	}
}
