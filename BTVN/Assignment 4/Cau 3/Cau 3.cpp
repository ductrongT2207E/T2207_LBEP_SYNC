//3. Nhap 1 so nguyen n, tim cac uoc so cua n.
#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int uoc = 1;
	printf("Uoc cua n la: ");
	while(uoc<=n){
		if (n%uoc==0)
			printf("%d ",uoc);
			uoc++;
	}  
	return 0; 
}
