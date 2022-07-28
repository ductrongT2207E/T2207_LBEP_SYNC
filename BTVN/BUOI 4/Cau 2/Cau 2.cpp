//2. Nhap 1 so nguyen n, tim so lon nhat nho hon n (tiem can duoi)
//va chia het cho ca 2 va 3.
#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao n= ");
	scanf("%d",&n);
	int max = 6; //khai bao so lon nhat nho hon n
	while(max<n){	
	max+=6;
	}
	printf("So lon nhat nho hon n va chia het cho 2 va 3 la: %d", max-6);
}
