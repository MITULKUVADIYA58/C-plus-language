
#include<iostream.h>
#include<conio.h>

void main()
{       int phy,chem,maths,total,avg;
	clrscr();
	cout<<"enter phy marks=";
	cin>>phy;

	cout<<"enter chem marks=";
	cin>>chem;

	cout<<"enter maths marks=";
	cin>>maths;

	total=phy+chem+maths;
	cout<<"total="<<total<<endl;

	avg=total/3;
	cout<<"percentage="<<avg;
	getch();
}