#include<stdio.h>
int main (){
	int n;
	int i = 1;
	int s = 0;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	while (i <= n){
		s = s + i;
		i++;
	}
	printf("Tong la S = %d", s);
}
