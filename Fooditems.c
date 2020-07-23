#include<stdio.h>
int main()
{
	int order;
	printf("enter your lucky number to get exciting food items:");
	scanf("%d",&order);
	switch(order)
	{
		case 1:printf("your lucky number brings you PIZZA of price-Rs 239");
		break;
		case 2:printf("your lucky number brings you BURGER of price-Rs 129");
		break;
		case 3:printf("your lucky number brings you PASTA of price-Rs 179");
		break;
		case 4:printf("your lucky number brings you FRENCH FRIES of price-Rs 99");
		break;
		case 5:printf("your lucky number brings you SANDWICH of price-Rs 149");
		break;
		default:printf("SORRY! your lucky number doesn't contain any food items");
	}
	return 0;
}
