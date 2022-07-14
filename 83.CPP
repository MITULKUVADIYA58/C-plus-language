#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j;
		for(i=1; i<6; i++)
		{
			for(j=1; j<=i; j++)
			{
				cout<<" "<<j;
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