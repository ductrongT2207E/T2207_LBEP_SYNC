//input integer array
//find and print out the prime numbers in the array
//if integer array has no prime numbers, print "No prime number"
#include<stdio.h>
int main(){
	//input integer array
	int n;
	printf("Input array with n integer, n = ");
	scanf("%d",&n);
	
	printf("Input %d integer:\n",n);
	int array[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	//find prime numbers and print result
	int count2 = 0;
	for(i=0;i<n;i++){
		int m=array[i];	
		int count1 = 0;
		for(int j=2;j<=m;j++){
			if(m%j==0){
				count1++;
				if(count1 > 1) break;
			}
		} 
		if(count1 == 1) {
			printf("%d is integer\n",m);
			count2++;
		}
	}
	if (count2==0){
		printf("No prime number");
	}
}
