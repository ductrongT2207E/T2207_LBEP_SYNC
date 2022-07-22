#include<stdio.h>
#include <math.h>
int main(){

	float a;
	printf("Nhap a=");
	scanf("%f",&a);
	
	float b;
	printf("Nhap b=");
	scanf("%f",&b);
	
	float c;
	printf("Nhap c=");
	scanf("%f",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){ 
				printf("phuong trinh co vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem");
			}
		}else{
			printf("phuong trinh co nghiem duy nhat x= %.2f",-c/b);
		}
	}else{
		float delta;
		delta = (b*b)-(4*a*c);
		if(delta>0){
			float x1;
			float x2;
			x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("x1 = %.2f\n", x1);
        	printf("x2 = %.2f", x2);
			}else if(delta==0){
				float x = -b/ (2*a);
				printf("phuong trinh co nghiem kep x =%.f", x);
			}else{
			printf("phuong trinh vo nghiem");
		}
	}
}
