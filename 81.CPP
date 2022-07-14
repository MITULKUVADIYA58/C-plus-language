#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j,k;
		for(i=1; i<=5; i++)
		{
			for(k=i; k<5; k++)
			{
				cout<<" ";
			}
			for(j=1; j<(i*2); j++)
			{
				cout<<"*";
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