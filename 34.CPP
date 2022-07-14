#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		char ch;
		cout<<"enter alphabet:";
		cin>>ch;
		if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
		{
			cout<<ch<<" this is alphabet";
		}
		else if(ch>='0' && ch<='9')
		{
			cout<<ch<<" this is number";
		}
		else
		{
			cout<<ch<<" this is spacial character";
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