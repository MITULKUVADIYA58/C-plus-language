#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num,rem,sum=0;
		cout<<"enter the number=";
		cin>>num;

		while(num>0)
		{
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		cout<<"sum="<<sum;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}