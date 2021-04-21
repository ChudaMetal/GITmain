#include <stdio.h>
int main(){
	int n,j=0;
	printf("Enter height of trangle:"); scanf("%d",&n);
	for (int c=0;c<n;c++){
		for (int k=0;k<c;k++)
		printf(" ");
		for (int m=n;m>c;m--)
		if (c%2==0){
		if (m%2==0)
		printf("*");
		else
		printf("+");}
		else 
		if (m%2==0)
		printf("+");
		else
		printf("*");
		
		printf("\n");
	}
	return(0);
}
