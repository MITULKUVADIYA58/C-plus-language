#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int age1,age2,age3;
		cout<<"enter age1=";
		cin>>age1;

		cout<<"enter age2=";
		cin>>age2;

		cout<<"enter age3=";
		cin>>age3;

		if(age1>age2 && age1>age3)
		{
			cout<<"age1 is oldest"<<endl;
		}
		else if(age2>age3 && age2>age1)
		{
			cout<<"age2 is oldest"<<endl;
		}
		else
		{
			cout<<"age3 is oldest"<<endl;
		}
		if(age1<age2 && age1<age3)
		{
			cout<<"age1 is youngest";
		}
		else if(age2<age3 && age2<age1)
		{
			cout<<"age2 is youngest";
		}
		else
		{
			cout<<"age3 is youngest";
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