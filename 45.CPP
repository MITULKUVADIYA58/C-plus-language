#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int n;
		cout<<"enter number between 0 to 9=";
		cin>>n;

		switch(n)
		{
			case 0:
			cout<<"zero";
			break;

			case 1:
			cout<<"one";
			break;

			case 2:
			cout<<"two";
			break;

			case 3:
			cout<<"three";
			break;

			case 4:
			cout<<"four";
			break;

			case 5:
			cout<<"five";
			break;

			case 6:
			cout<<"six";
			break;

			case 7:
			cout<<"seven";
			break;

			case 8:
			cout<<"eight";
			break;

			case 9:
			cout<<"nine";
			break;

			default:
			cout<<"not valied number please enter number between 0 to 9";
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