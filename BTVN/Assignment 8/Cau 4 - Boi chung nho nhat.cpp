//4. Tim boi chung nho nhat cua 2 so.
#include<stdio.h>
int BCNN(int a, int b){
	for(int i=a;;i++){
		if(i%a==0 && i%b==0) 
		return i;
	}
} 

int main()
{
	int a,b;
	printf("nhap a = ");
	scanf("%d",&a);
	printf("nhap b = ");
	scanf("%d",&b);
	
	printf("BCNN cua %d va %d la: %d",a,b,BCNN(a,b));
}
