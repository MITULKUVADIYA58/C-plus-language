#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j;
		for(i=1; i<=5; i++)
		{
			for(j=i; j<=5; j++)
			{
				cout<<" * ";
			}
			cout<<endl;
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