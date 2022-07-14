#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		char s[]="INDIA";
		int i,j;
		for(i=0; i<5; i++)
		{
			for(j=0; j<=i; j++)
			{
				cout<<" "<<s[j];
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