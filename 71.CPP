#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num,rem,sum=0,temp;
		cout<<"enter the number=";
		cin>>num;
		temp=num;
		while(num>0)
		{
			rem=num%10;
			sum=sum+(rem*rem*rem);
			num=num/10;
		}
		if(temp==sum)
		{
			cout<<temp<<"  it is armstrong number";
		}
		else
		{
			cout<<temp<<"  it is not armstrong number";
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