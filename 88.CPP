#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num=1,i,j;
		for(i=1; i<=5; i++)
		{
			for(j=1; j<=i; j++)
			{
				cout<<" "<<char('A'+num-1);
				num++;
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