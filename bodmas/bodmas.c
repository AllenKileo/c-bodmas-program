#include<stdio.h>
int main(){
	int a,b,addition,subtraction,multiplication,divide;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	addition=a+b;
	printf("The sum is: %d",addition);
	subtraction=a-b;
	printf("The remaining is: %d",subtraction);
	multiplication=a*b;
	printf("The product is: %d",multiplication);
	divide=a/b;
	printf("The divider is: %d",divide);
	getch();
}
