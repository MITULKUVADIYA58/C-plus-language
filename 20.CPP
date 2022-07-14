#include<iostream.h>
#include<conio.h>

void main()
{
	int num1=67,num2=56,temp;
	clrscr();
	cout<<"before swapping value of num1="<<num1<<" num2="<<num2<<endl;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"after swapping value of num1="<<num1<<" num2="<<num2<<endl;
	getch();
}