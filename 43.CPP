#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num;
		cout<<"enter num=";
		cin>>num;
		switch(num)
		{
		case 1:
		cout<<"january";
		break;

		case 2:
		cout<<"february";
		break;

		case 3:
		cout<<"march";
		break;

		case 4:
		cout<<"april";
		break;

		case 5:
		cout<<"may";
		break;

		case 6:
		cout<<"june";
		break;

		case 7:
		cout<<"july";
		break;

		case 8:
		cout<<"augast";
		break;

		case 9:
		cout<<"september";
		break;

		case 10:
		cout<<"octomber";
		break;

		case 11:
		cout<<"november";
		break;

		case 12:
		cout<<"december";
		break;

		default:
		cout<<"plesae eneter number between 1 to 12";
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