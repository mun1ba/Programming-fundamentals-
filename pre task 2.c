#include<stdio.h>
int waterlevel(int level)
{
	if(level<20){
		return 1;
	}
	else if(level<=70){
		return 2;
	}
	else{
		return 3;
	}
}
int main()
{
	int n, level, result, i;
	int low=0, normal=0,high=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter water level:");
		scanf("%d",&level);
		result=waterlevel(level);
		if(result==1){
			printf("Low\n");
			low++;
		}
		else if(result==2){
			printf("Normal\n");
			normal++;
		}
		else{
			printf("High\n");
			high++;
		}
	}
	printf("%d %d %d\n",low,normal,high);
	return 0;
}
