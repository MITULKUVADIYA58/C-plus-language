#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1,num2,num3;
		cout<<"enter num1=";
		cin>>num1;

		cout<<"enter num2=";
		cin>>num2;

		cout<<"enter num3=";
		cin>>num3;

		(num1>num2 && num1>num3)?cout<<"num1 is max":(num2>num3 && num2>num3)?cout<<"num2 is max":cout<<"num3 is max";
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}