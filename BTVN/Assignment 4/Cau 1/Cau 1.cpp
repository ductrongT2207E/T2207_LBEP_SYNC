//1. Nhap 1 so nguyen n, in ra cac so le nho hon n.
#include<stdio.h>
int main() {
	int n;
	printf("nhap vao n = ");
	scanf("%d", &n);
	int odd = 1; //khai bao so le nho hon n
	printf("cac so le nho hon n la:\n");
	while(odd<n){
		printf("%d\n",odd);
		odd+=2;
	}
	return 0;
} 
