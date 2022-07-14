
#include<iostream.h>
#include<conio.h>

void main()
{       float r,p,m=22.7,a;
	clrscr();
	cout<<"enter circle radius:";
	cin>>r;
	p=(2*m)*r;
	cout<<"perimeter of circle :"<<p<<endl;
	a=m*(r*r);
	cout<<"area of circle :"<<a;
	getch();
}