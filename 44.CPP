#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int day;
		cout<<"enter number=";
		cin>>day;

		switch(day)
		{
			case 1:
			cout<<"monday";
			break;

			case 2:
			cout<<"tuesday";
			break;

			case 3:
			cout<<"wenesday";
			break;

			case 4:
			cout<<"thursday";
			break;

			case 5:
			cout<<"friday";
			break;

			case 6:
			cout<<"saturday";
			break;

			case 7:
			cout<<"sunday";
			break;

			default:
			cout<<"please enter number between 1 to 7";
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