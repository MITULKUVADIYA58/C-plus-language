#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1=0,num2=1,num3=1,i,num,sum;
		cout<<"enter the number=";
		cin>>num;
		cout<<endl<<" "<<num1<<" "<<num2<<" "<<num3;
		for(i=2; i<num; i++)
		{
			sum=num1+num2+num3;
			cout<<" "<<sum;
			num1=num2;
			num2=num3;
			num3=sum;
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