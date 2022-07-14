#include<iostream.h>
#include<conio.h>

void main()
{       float c,f;
	clrscr();
	cout<<"enter temprature in fahreneit=";
	cin>>f;

	c=((f-32)*5)/9,f;
	cout<<"temprature in celsius="<<c;
	getch();
}