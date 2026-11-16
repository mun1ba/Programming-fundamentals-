#include<stdio.h>
int diamond(int n)
{
	int i, j;
	//top half
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		printf("*");
		if(i>1){
			for(j=1;j<=2*i-3;j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
	//bottom half
	for(i=n-1;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		if(i>1){
			for(j=1;j<=2*i-3;j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=2&&n<=50)
		diamond(n);
	else
		printf("Invalid");
	return 0;
	
}
