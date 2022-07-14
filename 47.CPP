#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	int num,ans;
	cout<<"enter number=";
	cin>>num;

	ans=num%2==0;

	switch(ans)
	{       case 1:
		cout<<"num is even";
		break;

		default:
		cout<<"num is odd";
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