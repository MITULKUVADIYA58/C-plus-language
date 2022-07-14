#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int year,bonus,salary;
	cout<<"enter yourjob year=";
	cin>>year;
	cout<<"enter your salary=";
	cin>>salary;

	if(year>5)
	{
		bonus=salary*0.05;
		cout<<"apply for bonus "<<bonus;
	}
	else
	{
		cout<<"not apply for bonus ";
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
