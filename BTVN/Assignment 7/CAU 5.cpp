//Nhap 1 mang n so nguyen, dam bao cac so nhap vao k bi trung nhau
#include<stdio.h>
int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	printf("nhap %d so nguyen:\n",n);

	int a[n];	
	for(int i=0;i<n;i++){
		int flag=0;
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				printf("Gia tri bi trung vui long nhap lai!\n");
				flag=1;
				break;
			} 
		} 
		if(flag==1){
			i--;
		}
	}
	
	printf("Mang vua nhap la: ");
	for (int i=0;i<n;i++){	
		printf("%d ",a[i]);
	}
}
