#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int num1=1;
	while(num1<=10)
	{
		cout<<"  "<<num1;
		num1++;
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