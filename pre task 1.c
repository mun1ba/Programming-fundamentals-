#include<stdio.h>
int change;
int changecalculation(int price, int paid)
{
	if(paid<price)
		return-1;
	else
		return paid-price;		
}
int main()
{
	int price, paid, change;
	printf("Enter price:");
	scanf("%d",&price);
	printf("Enter amount paid");
	scanf("%d",&paid);
	change=changecalculation(price, paid);
	printf("change = %d",change);
	return 0;
}
