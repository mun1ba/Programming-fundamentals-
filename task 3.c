#include<stdio.h>
int main()
{
	int size, i, j;
	int x[100], y[100], z[100];
	int sum=0;
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++){
		sum=sum+x[i];
		y[i]=sum;
	}
	sum=0;
	for(i=size-1;i>=0;i--){
		sum=sum+x[i];
		z[i]=sum;
	}
	for(i=0;i<size;i++){
		printf("(%d,%d)",y[i],z[i]);
		if(i!=size-1)
			printf("-");
	}
	return 0;
}
