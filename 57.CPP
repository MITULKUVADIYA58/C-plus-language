#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int age;
		char ch;
		cout<<"enter age : ";
		cin>>age;

		cout<<"enter gender m or f : ";
		cin>>ch;

		if(ch=='f'|| ch=='F')
		{
			cout<<"she will work only in urban areas";
		}
		else if(age>20 && age<40)
		{
			cout<<"he may work in anywhere";
		}
		else if(age>40 && age<60)
		{
			cout<<"he will work in urban areas only";
		}
		else
		{
			cout<<"error";
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