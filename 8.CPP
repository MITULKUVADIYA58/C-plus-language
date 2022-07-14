#include<iostream.h>
#include<conio.h>

void main()
{
	int num1=15;
	clrscr();
	cout<<"num1="<<(num1=num1)<<endl;
	cout<<"num1+="<<(num1+=5)<<endl;
	cout<<"num1-="<<(num1-=5)<<endl;
	cout<<"num1*="<<(num1*=5)<<endl;
	cout<<"num1/="<<(num1/=5)<<endl;
	cout<<"num1%="<<(num1%=5)<<endl;
	getch();
}