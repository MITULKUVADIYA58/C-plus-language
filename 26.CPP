#include<iostream.h>
#include<conio.h>

void main()
{       float num,days,year,week;
	clrscr();
	cout<<"enter num:";
	cin>>num;

	year=(num/365);
	cout<<"year="<<(int)year<<endl;

	week=num/7;
	cout<<"week="<<(int)week<<endl;

	days=((year*365)+(week*7))-num;
	cout<<"days="<<(int)days;
	getch();
}