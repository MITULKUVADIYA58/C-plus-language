#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		char ch;
		cout<<"enter y or n :";
		cin>>ch;

		if(ch=='y')
		{
			cout<<"not apply for medical cause";
		}
		else
		{
			cout<<"apply for medical cause";
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