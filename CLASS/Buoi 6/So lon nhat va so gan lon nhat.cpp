#include<stdio.h> //tim so gan lon nhat trong n so nhap vao
int main()
{
	int second;
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	
	int ary[n];
	int i, high;
	printf("nhap %d so nguyen:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &ary[i]);
	}
	
	if(ary[0] > ary[1]) {
      high = ary[0];
      second  = ary[1];
   }else {
      high = ary[1];
      second  = ary[0];
	
	
	for(i=2;i<n;i++)
	{
		if(ary[i]>high);
		second = high;
		high = ary[i];
		
	}
	printf("\nHighest value entered was %d", high);
	printf("\nNearly highest value entered was %d", second);
}
}
