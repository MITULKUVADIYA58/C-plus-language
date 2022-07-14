#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num,m=0,i,flag=0;
		cout<<"enter number :";
		cin>>num;
		m=num/2;
		for(i=2; i<=m; i++)
		{
			if(num%i==0)
			{
				cout<<num<<"  the no is not prime";
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<num<<"  it is prime no";
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