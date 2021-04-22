#include <stdio.h>
const int n=7;              
int main()
{
	int M=7,N=n,p=M+N;
	int a[N]={17,13,11,7,5,3,1};
	int b[M]={14,12,10,8,6,4,2};
	int c[p];
	for (int i=0;i<N;i++)
	printf("%d ",a[i]);
	printf("\n");
		for (int i=0;i<M;i++)
	printf("%d ",b[i]);
	int k=0,i=0,j=0;
	while (i<=N && j<=M)
	if (a[i]>b[j] && a[i]!=0)
		c[k++]=a[i++];
	else if (a[i]<b[j] && b[j]!=0)
		c[k++]=b[j++];
	else if (i>=N)
	c[k++]=b[j++];
	else if (j>=M)
	c[k++]=a[i++];
	else{
		c[k++]=b[j++];
		i++;
	}
	printf("\n");
	for (int i=0;i<p;i++)
	printf("%d ",c[i]);
	return(0);
		}
