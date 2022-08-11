//Cach 1:
//#include<stdio.h>
//int main(){
//	for(int i=0; i<5; i++){
//		for(int j=0;j<5;j++){
//			if(i%2==1 && j==4)
//			continue;
//		printf("*"); 
//		}
//	printf("\n");
//			
//	}
//}

//Cach 2:
#include<stdio.h>
int main(){
	for(int i=0; i<5; i++){
		for(int j=0;j<4;j++){
		printf("*"); 
		}
	if(i%2==0)
	printf("*");
	printf("\n");
	}
}
