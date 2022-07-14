#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num;
		cout<<"enter num=";
		cin>>num;

		num%2==0?cout<<"it is even":cout<<"it is odd";
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}