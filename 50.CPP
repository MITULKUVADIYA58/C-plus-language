#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int num1,num2,ans;
	cout<<"enter num1=";
	cin>>num1;

	cout<<"enter num2=";
	cin>>num2;

	ans=num1>num2;

	switch(ans)
	{       case 1:
		cout<<"num1 is maximum";
		break;

		default:
		cout<<"num2 is maximum";
		break;
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