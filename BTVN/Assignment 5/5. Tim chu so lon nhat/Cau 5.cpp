//5. Tim chu so lon nhat cua so nguyen duong n.
#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	printf("Chu so lon nhat cua n la: ");
	int i;
	int max=1;
	while(n>0){
		i=n%10; 
		n/=10;
		if(i>max){
			max=i;
		}
	}
   printf("%d",max);
}
