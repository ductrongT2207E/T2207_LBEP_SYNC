//6. Nhap mang n so nguyen, tim so luong cac so duong lien tiep nhieu nhat.
#include<stdio.h>
int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	
	//nhap gia tri vao mang
	printf("nhap %d so nguyen:\n",n);
	int i;
	int ary[n];
	for (i=0;i<n;i++)
	{
		scanf("%d", &ary[i]);
	}
	
	//tim so luong so duong lien tiep nhieu nhat
	int thangmay=0;
	int kiluc=0;
	for (i=0; i<n; i++)
	{
		if(ary[i]>0)
		{
			thangmay++;
			if(thangmay>kiluc){
				kiluc=thangmay;
			}
		}else{
			thangmay=0;
		}
	}
	printf("so luong so duong lien tiep nhieu nhat la: %d",kiluc);
}
