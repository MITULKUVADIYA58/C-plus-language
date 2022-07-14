#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int num;
	cout<<"enter number=";
	cin>>num;

	if(num%2==0)
	{
		cout<<"num is even";
	}
	else
	{
		cout<<"num is odd";
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