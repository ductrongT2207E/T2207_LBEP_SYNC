//Nhap 2 so là gia tri cua thang va ngay. Kiem tra xem do 
//la ngay thu bao nhieu trong nam, va do dang la dang thu may. 
//Voi gia dinh rang: ngay 1/1 la ngay thu 2 va nam khong nhuan.
#include<stdio.h>
int main (){
	int d,m;
	printf("nhap d = ");
	scanf("%d", &d);
	printf("nhap m = ");
	scanf("%d", &m);
	
	//tinh xem do ngay thu bao nhieu trong nam
	int z=d;
	int n; //n de dem so ngay trong thang
	for(int i=1;i<=m;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){n=31;}
		if(i==2){n=28;}
		if(i==4||i==6||i==9||i==11){n=30;}
		z=z+n;
	}
	z=z-n;
	printf("Do la ngay thu %d trong nam\n",z);
	
	//Tim xem ngay do la thu may trong tuan
	//Cach 1:
	int t=z%7;
	int y=0;
	for(int j=0;j<=t;j++){
		y++;
	}
	if(y==1) printf("Do la Chu Nhat");
	else printf("Do la thu %d",y);
	
//	Cach 2: (Tim thu trong tuan)
//	t=z%7;
//	switch (t){
//		case 0:
//		printf("Do la Chu Nhat");
//		break;
//		case 1:
//		printf("Do la thu Hai");
//		break;
//		case 2:
//		printf("Do la thu Ba");
//		break;
//		case 3:
//		printf("Do la thu Tu");
//		break;
//		case 4:
//		printf("Do la thu Nam");
//		break;
//		case 5:
//		printf("Do la thu Sau");
//		break;
//		case 6:
//		printf("Do la thu Bay");
//		break;
//	}
	
}
