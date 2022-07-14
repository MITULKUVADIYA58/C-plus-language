#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,fact=1,num;
		cout<<"enter any number=";
		cin>>num;
		for(i=1; i<=num; i++)
		{
			fact=fact*i;
		}
		cout<<"factorial of num is:"<<fact;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}