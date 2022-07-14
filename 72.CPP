#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num,rem,sum=0,temp;
		cout<<"enter the number :";
		cin>>num;

		temp=num;
		while(num>0)
		{
			rem=num%10;
			sum=(sum*10)+rem;
			num=num/10;
		}
		if(temp==sum)
		{
			cout<<temp<<"  is palindrome number";
		}
		else
		{
			cout<<temp<<"  is not palindrome number";
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