#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int x=2,y=5,z=0;
		cout<<"i   x==2 "<<(x==2)<<endl;
		cout<<"ii  x!=5 "<<(x!=5)<<endl;
		cout<<"iii x!=5 && y>=5 "<<(x!=5 && y>=5)<<endl;
		cout<<"iv  z!=0 || x==2 "<<(z!=0 || x==2);
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}