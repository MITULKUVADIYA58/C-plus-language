#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int num,i,r,arr[30];
		cout<<"enter size of array:";
		cin>>num;

		cout<<"enter elements:";
		for(i=0; i<num; i++)
		{
			cin>>arr[i];
		}
		cout<<"enter element to serch:";
		cin>>r;
		i=0;
		while(i<num && r!=arr[i])
		{
			i++;
		}
		if(i<num)
		{
			cout<<"the element is found in the position="<<i+1;
		}
		else
		{
			cout<<"element not found:";
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