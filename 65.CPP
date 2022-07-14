#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i;
		for(i=1; i<=5; i++)
		cout<<" "<<i*i*i;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}