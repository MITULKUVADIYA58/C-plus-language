#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j,k;
		for(i=5; i>=1; i--)
		{
			for(k=1; k<i; k++)
			{
				cout<<" ";
			}
			for(j=5; j>=i; j--)
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