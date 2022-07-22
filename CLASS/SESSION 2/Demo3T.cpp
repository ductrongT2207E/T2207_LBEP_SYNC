#include<stdio.h>
int main(){
	//input num
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	

	if(a > b) {
		//chay vao day neu yes
		printf("Max : %d",a);
	}else{
		//chay vao day neu no
		if(a < b){
			printf("Max : %d",b);		
		}else{
			printf("Hai so bang nhau");
		}
	
	}
}
