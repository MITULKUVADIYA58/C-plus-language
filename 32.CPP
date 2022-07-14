#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	  int num;
	  cout<<"enter number=";
	  cin>>num;

	  if(num>0)
	  {
		cout<<"positive";
	  }
	  else if(num<0)
	  {
		cout<<"nagetive";
	  }
	  else
	  {
		cout<<"zero";
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