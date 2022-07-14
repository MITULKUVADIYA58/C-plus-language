#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int n;
		cout<<"enter number=";
		cin>>n;
		if(n%5==0 && n%6==0)
		{
			cout<<"number divide by 5 and 6";
		}
		else if(n%5==0)
		{
			cout<<"number divide by 5";
		}
		else if(n%6==0)
		{
			cout<<"number divide by 6";
		}
		else
		{
			cout<<"number not divide by 5 and 6";
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