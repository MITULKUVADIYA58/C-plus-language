#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j;
		for(i=5; i>=1; i--)
		{
			for(j=i; j<=5; j++)
			{
				cout<<" "<<char('A'+j-1);
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