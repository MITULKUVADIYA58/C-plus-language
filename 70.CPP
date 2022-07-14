#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num1,total,multi;
		cout<<"enter any number=";
		cin>>num1;
		for(total=1; total<=10; total++)
		{
			multi=total*num1;
			cout<<endl<<num1<<"*"<<total<<"="<<multi<<endl;
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