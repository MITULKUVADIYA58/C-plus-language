#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j,arr[20],max,min,n;
		cout<<"enter size of array=";
		cin>>n;
		cout<<"enter array elements=";
		for(i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		max=arr[0];
		for(i=0; i<n; i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
		}
		min=arr[0];
		for(i=0; i<n; i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
		cout<<"maximum="<<max<<endl;
		cout<<"minimum="<<min;

	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}