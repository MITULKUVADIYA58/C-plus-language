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
			for(j=1; j<=10; j++)
			{
				cout<<" "<<i<<"*"<<j<<"="<<i*j;
			}
			cout<<endl<<endl;
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