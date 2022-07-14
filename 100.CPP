#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()

	{
		int arr[20],n,sume=0,sumo=0;
		long int mule=1,mulo=1;
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
			cout<<"arr["<<i<<"]= "<<arr[i]<<endl;
			if(arr[i]%2==0)
			{
			sume=sume+arr[i];
			mule=mule*arr[i];
			}
			else
			{
				sumo=sumo+arr[i];
				mulo=mulo+arr[i];
			}
		}
		cout<<endl<<"sum for odd numbers="<<sumo<<endl;
		cout<<"multiplication for odd numbers="<<mulo<<endl<<endl;
		cout<<"sum for even numbers="<<sume<<endl;
		cout<<"multiplication for even numbers="<<mule<<endl;

	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}