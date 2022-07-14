#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int n=10,temp;
		int arr[10]={2,5,6,4,7,8,3,6,4,10};
		for(int i=0; i<n/2; i++)
		{
			temp=arr[i];
			arr[i]=arr[n-i-1];
			arr[n-i-1]=temp;
		}
		for(i=0; i<n; i++)
		{
			cout<<arr[i] <<endl;
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