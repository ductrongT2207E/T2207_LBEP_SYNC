#include<stdio.h>
#include <string.h>
int main(){
	int n1,n2;
	printf("nhap do dai string 1 = ");
	scanf("%d",&n1);
	char string1[n1];
	scanf("%s",string1);
	
	printf("nhap do dai string 2 = ");
	scanf("%d",&n2);
	char string2[n2];
	scanf("%s",string2);
	
	if ( n1 > n2) {                                   
   	    char temp[n1];
   	    strcpy(temp,string2);
   	    strcpy(string2,string1);
   	    strcpy(string1,temp);
	}
	bool  include = false;
	int i = 0;
		while ( string2[i] != 0){                    
			if ( string2[i] == string1[0]) {
				int j = 0;
				while( string1[j] != 0 && string2[i] != 0 && string1[j] == string2[i]){
					i++;
					j++;
				}
				if( string1[j] == 0) {
					include = true;
					break;
				}
			} else { 
			i++;}
		}
   if (include) { 
   printf ("YES");
   } else { 
   	printf ("NO");
   }

}
