#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int arr[20],n;
		cout<<"enter a size of array between 1 to 20=";
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cout<<"enter number=";
			cin>>arr[i];
		}
		cout<<"value of array is"<<endl;
		for(i=0; i<n; i++)
		{
			cout<<endl<<"  arr["<<i<<"]= "<<arr[i];
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