#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int num=1;
	while(num<=10)
	{
		cout<<num<<" mitul"<<endl;
		num++;
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
