#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int phy,chem,maths,eng,com,total,avg;
	cout<<"enter phy marks=";
	cin>>phy;

	cout<<"enter chem marks=";
	cin>>chem;

	cout<<"enter maths marks=";
	cin>>maths;

	cout<<"enter eng marks=";
	cin>>eng;

	cout<<"enter com marks=";
	cin>>com;

	total=phy+chem+maths+eng+com;
	cout<<"total="<<total<<endl;

	avg=total/5;
	cout<<"percentage="<<avg<<endl;
	if(avg>=80 && avg<=100)
	{
		cout<<"A grade";
	}
	else if(avg>=60 && avg<80)
	{
		cout<<"B grade";
	}
	else if(avg>=50 && avg<60)
	{
		cout<<"c grade";
	}
	else if(avg>=45 && avg<50)
	{
		cout<<"D grade";
	}
	else if(avg>=25 && avg<45)
	{
		cout<<"E grade";
	}
	else
	{
		cout<<"fail";
	}
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}