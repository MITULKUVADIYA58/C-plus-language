#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1,rem,sum=0;
		cout<<"enter any number=";
		cin>>num1;
		while(num1>0)
		{
			rem=num1%10;
			sum=(sum*10)+rem;
			num1=num1/10;
		}
		cout<<"reverse number="<<sum;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}