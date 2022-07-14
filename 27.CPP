#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int lenth,width;
	cout<<"enter lenth=";
	cin>>lenth;

	cout<<"enter width=";
	cin>>width;

	if(lenth==width)
	{
		cout<<"this is square";
	}
	else
	{
		cout<<"this is rectangle";
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