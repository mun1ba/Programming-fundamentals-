#include<stdio.h>
int reverse(int *num){
	int digit, rev=0;
	while(*num>0)
	{
		digit=*num%10;
		rev=rev*10+digit;
		*num=*num/10;
	}
	*num=rev;
}
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	reverse(&num);
	printf("reversed number = %d", num);
	return 0;
}
