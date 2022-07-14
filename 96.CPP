#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1,num2,i,j;
		cout<<"enter num1 less than num2 :";
		cin>>num1;
		cout<<"enter num2 greater than num1 :";
		cin>>num2;
		for(i=num1; i<=num2; i++)
		{
			cout<<endl<<i<<"*"<<i<<"="<<i*i;
		}
		cout<<endl;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}