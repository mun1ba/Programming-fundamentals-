#include<stdio.h>
int main()
{
	int size, i, j, leader;
	int x[100];
	scanf("%d",&size);
	printf("Enter elements:");
	for(i=0;i<size;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<size;i++){
		leader=1;
		for(j=i+1;j<size;j++){
			if(x[j]>=x[i]){
				leader=0;
				break;
			}
		}
		if(leader==1)
		{
			printf("%d ",x[i]);
		}
	}
	return 0;
}
