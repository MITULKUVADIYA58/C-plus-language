#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num;
		cout<<"enter year in 4 digit : ";
		cin>>num;
		if(num%4==0)
		{
			cout<<"this is leap year";
		}
		else
		{
			cout<<"this is not leap year";
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