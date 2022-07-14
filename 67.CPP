#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,num1,num2,ans=1;
		cout<<"enter number=";
		cin>>num1;

		cout<<"enter number of power=";
		cin>>num2;

		for(i=1; i<=num2; i++)
			ans=ans*num1;
		cout<<"power of entered number="<<ans;

	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}