#include<iostream.h>
#include<conio.h>

void main()
{       int num1=10,num2=5;
	clrscr();
	cout<<"before swapping value of num1="<<num1<<" num2="<<num2<<endl;
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout<<"after swapping value of num1="<<num1<<" num2="<<num2;
	getch();
}