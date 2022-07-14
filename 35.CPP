#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1,num2;
		cout<<"enter num1=";
		cin>>num1;

		cout<<"enter num2=";
		cin>>num2;

		if(num1==num2)
		{
			cout<<"equal";
		}
		else
		{
			cout<<"not equal";
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