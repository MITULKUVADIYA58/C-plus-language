#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int num1,num2,num3;
	cout<<"enter 1st number=";
	cin>>num1;

	cout<<"enter 2nd number=";
	cin>>num2;

	cout<<"put your choice"<<endl<<"1 addition"<<endl<<"2 substraction"<<endl<<"3 multiplication"<<endl<<"4 division"<<endl<<"5 modulo"<<endl;

	cout<<endl<<"enter your choice";
	cin>>num3;

	switch(num3)
	{
		case 1:
		cout<<"addition "<<num1+num2;
		break;

		case 2:
		cout<<"substraction"<<num1-num2;
		break;

		case 3:
		cout<<"multiplication"<<num1*num2;
		break;

		case 4:
		cout<<"division"<<num1/num2;
		break;

		case 5:
		cout<<"modulo"<<num1%num2;
		break;

		default:
		cout<<"please enter number between 1 to 5";
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