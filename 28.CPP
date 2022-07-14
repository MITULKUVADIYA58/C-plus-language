#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int num1,num2;
	cout<<"enter first number=";
	cin>>num1;

	cout<<"enter second number=";
	cin>>num2;
	if(num1>num2)
	{
		cout<<"num1 is grater";
	}
	else
	{
		cout<<"num2 is grater";
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