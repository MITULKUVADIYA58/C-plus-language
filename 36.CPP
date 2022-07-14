#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int m;
		cout<<"enter month number:";
		cin>>m;
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{
			cout<<"31 days in this month";
		}
		else if(m==4||m==6||m==9||m==11)
		{
			cout<<"30 days in this month";
		}
		else if(m==2)
		{
			cout<<"28 days in this month";
		}
		else
		{
			cout<<"please enter month number between 1 to 12";
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