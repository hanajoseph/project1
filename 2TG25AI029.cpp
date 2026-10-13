#include<stdio.h>
#include<conio.h>
void Swap Byvalue (int a,int b)
{
	int temp=a;
	a =b;
	b =temp;
	printf("Preview Swap(By value):%d%d\n",a,b);
}
void Swapn by Refference(int *a,int *b)
{
	int temp=*a;
	*a =*b;
	*b =temp;
	printf("Actuval Swap(By Reference):%d%d\n",*a,*b);
}
int main()
{
	int X,Y;
	printf("Enter two currency value:");
	scanf("%d%d",&X,&Y);
	Swap by value(X,Y);
	printf("After Call By value:%d%d\n",X<Y);
	Swapby Reference(&x,&y);
	printf("After Call By Refference:%d%d\n",X,Y);
	getch();
}
