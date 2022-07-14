#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int quantity,total;
	cout<<"enter quantity=";
	cin>>quantity;

	total=100*quantity;

	if(total>=1000)
	{
		total=total*0.1;
		cout<<"discount 10 percent apply"<<endl
		<<"discount is="<<total;
	}
	else
	{
		cout<<"discount 10 percent not apply "<<total;
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