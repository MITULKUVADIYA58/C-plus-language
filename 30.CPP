#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int age;
	cout<<"enter your age=";
	cin>>age;

	if(18<=age)
	{
		cout<<"eligible for voting";
	}
	else
	{
		cout<<"not eligible for voting";
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