#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int held,attend,avg;

	cout<<"number of classes held by teacher:";
	cin>>held;

	cout<<"number of classes attend by student:";
	cin>>attend;

	avg=(attend*100)/held;
	cout<<"percentage of classes attended by students"<<avg<<endl;

	if(avg>75)
	{
		cout<<"you will eligible to give exam";
	}
	else
	{
		cout<<"you will not eligible to give exam";
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