#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int row,col;
		for(row=1; row<6; row++)
		{
			for(col=1; col<6; col++)
			{
				if(row==1||row==5||col==1||col==5)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
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