#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Welcome to LXI");
	printf("Oh.....");
	printf("Enter First Number");
	scanf("%d",&a);
	printf("Enter Second Number");
	scanf("%d",&b);
	c=a+b;
	printf("\n Sum is %d",c);
	if(c<100)
	{
		printf("Less than 100");
	}
	else
	{
		println("Not lessthan 100");
	}
	return 0;
}
