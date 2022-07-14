#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int arr[20],n,sum=0,mul=1;
		cout<<"enter a size of array between 1 to 20=";
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cout<<"enter number=";
			cin>>arr[i];
		}
		cout<<"value of array is";
		for(i=0; i<n; i++)
		{
			cout<<endl<<"  arr["<<i<<"]= "<<arr[i]<<endl;
			sum=sum+arr[i];
			mul=mul*arr[i];
		}
		cout<<"sum="<<sum<<endl;
		cout<<"multiplication="<<mul<<endl;

	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}