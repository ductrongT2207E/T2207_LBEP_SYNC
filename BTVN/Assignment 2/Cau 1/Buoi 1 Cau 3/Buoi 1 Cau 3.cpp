#include <stdio.h>
#include <math.h>
int main() {

          float a, b, c, p, p2, s;

          printf("nhap a= ");
          scanf("%f", &a);

          printf("nhap b= ");
          scanf("%f", &b);

          printf("nhap c= ");
          scanf("%f", &c);

          if((a+b)>c){
          	if((a+c)>b){
          		if((b+c)>a){
          			
          			p = (a+b+c)/2;
          			s = sqrt(p*(p-a)*(p-b)*(p-c));
          			p2 = p*2;
          			
          			printf("Day la ba canh cua tam giac\n");
          			printf("Chu vi cua tam giac la %f\n", p2);
                   	printf("Dien tich cua tam giac la %f\n", s);
                   	
				  }else{
				  		printf("\nDay khong phai la ba canh cua tam giac");
				  }
			  }else{
			  	printf("\nDay khong phai la ba canh cua tam giac");
			  }
          } else {
          	printf("\nDay khong phai la ba canh cua tam giac");
		  }

                   
}
