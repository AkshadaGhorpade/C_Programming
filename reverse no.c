#include<stdio.h>
int main()
{
	int num,reverse=0,reminder;
	printf("enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		reminder=num%10;
		reverse=reverse*10+reminder;
		num/=10;
	}
	printf("%d",reverse);
	return 0;
	
}
