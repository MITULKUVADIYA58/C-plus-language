#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1=0,num2=1,num3,i,num;
		cout<<"enter the number=";
		cin>>num;
		cout<<endl<<" "<<num1<<" "<<num2;
		for(i=2; i<num; i++)
		{
			num3=num1+num2;
			cout<<" "<<num3;
			num1=num2;
			num2=num3;
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