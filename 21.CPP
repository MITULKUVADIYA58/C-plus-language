#include<iostream.h>
#include<conio.h>

void main()
{       int num1=58,num2=59,num3=60,num4=61,temp;
	clrscr();
	cout<<"before swapping value of num1="<<num1<<" num2="<<num2<<" num3="<<num3<<" num4="<<num4<<endl;
	temp=num1;
	num1=num2;
	num2=num3;
	num3=num4;
	num4=temp;
	cout<<"after swapping value of num1="<<num1<<" num2="<<num2<<" num3="<<num3<<" num4="<<num4<<endl;
	getch();
}