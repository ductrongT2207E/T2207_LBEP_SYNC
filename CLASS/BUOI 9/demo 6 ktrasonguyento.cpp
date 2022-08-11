#include<stdio.h>
bool ktSoNguyenTo(int n)
{
	if(n<=1) return false;
	for(int i=2;i<=n/2;i++){
			if(n%i==0){
			return false;
		} 
	} return true;
}

int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	int z = ktSoNguyenTo(n);
	if (ktSoNguyenTo(n)) printf("n la so nguyen to");
	else printf("n ko phai la so nguyen to");
}
