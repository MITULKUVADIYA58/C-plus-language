#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		long int num1,rem;
		cout<<"enter any num1 :";
		cin>>num1;
		while(num1>0)
		{
			rem=num1%10;
			if(rem%2==0)
			{
				cout<<rem<<"is even"<<endl;
			}
			else
			{
				cout<<rem<<"is odd"<<endl;
			}
			num1=num1/10;

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