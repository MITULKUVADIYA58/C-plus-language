#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int arr[20],pos,i,num,value;
		cout<<"enter size of array:";
		cin>>num;
		cout<<"enter elements are:"<<num<<endl;
		for(i=0; i<num; i++)
		{
			cin>>arr[i];
		}
		cout<<"enter the position where you want to insert the element :";
		cin>>pos;
		cout<<"enter the value:";
		cin>>value;
		for(i=num; i>=pos; i--)
		{
			arr[i]=arr[i-1];
		}
		arr[i]=value;
		cout<<"final array:\n";
		for(i=0; i<=num; i++)
		{
			cout<<endl<<arr[i];
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