#include<stdio.h>
int suitablepkg(int weight)
{
	if(weight >= 5 && weight <= 50 && weight%2 == 0){
		return 1;
	}
	else 
		return 0;
}
int main()
{
	int i, j, r, c, total=0;
	int count;
	printf("Enter rows and columns");
	scanf("%d %d",&r,&c);
	int x[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<r;i++){
		count=0;
		for(j=0;j<c;j++){
			if(suitablepkg(x[i][j])==1){
				count++;
				total++;
			}
		}
		printf("%d\n",count);
	}
	printf("%d\n",total);
	return 0;
}
