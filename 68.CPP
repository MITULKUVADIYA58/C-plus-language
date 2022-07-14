#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1,num2,i,sum=0;
		long int multi=1;
		cout<<"enter value smaller than value2 :";
		cin>>num1;

		cout<<"enter value bigger than value1 :";
		cin>>num2;

		for(i=num1; i<=num2; i++)
		{
			sum=sum+i;
			multi=multi*i;
		}
		cout<<"sum="<<sum<<endl;
		cout<<"multiplcation="<<multi<<endl;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}