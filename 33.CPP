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
		if(ch>='A' && ch<='Z')
		{
			cout<<ch<<" this character in uppercase";
		}
		else
		{
			cout<<ch<<" this character in lowercase";
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