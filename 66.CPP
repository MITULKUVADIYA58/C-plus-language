#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num,sum=0;
		for(num=1; num<=10; num++)
		sum=num+sum;
		cout<<"addition of 1 to 10= "<<sum;

	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}