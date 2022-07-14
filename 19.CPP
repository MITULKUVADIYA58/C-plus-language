#include<iostream.h>
#include<conio.h>

void main()
{
	int num1,num2,num3,num4;
	clrscr();
	cout<<"enter first number=";
	cin>>num1;

	cout<<"enter second number=";
	cin>>num2;

	cout<<"sum of two number="<<num1+num2<<endl;
	cout<<"product of two number="<<num1*num2<<endl;

	num3=(num1+num2)+(num1*num2);
	cout<<"additon of sum and product="<<num3<<endl;
	num4=(num1+num2)*(num1*num2);
	cout<<"multipliacation of sum and product="<<num4;
	getch();
}