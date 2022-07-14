#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		char gender;
		cout<<"enter m or f  :";
		cin>>gender;

		switch(gender)
		{
			case 'm':
			cout<<"male";
			break;

			default:
			cout<<"female";
			break;
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