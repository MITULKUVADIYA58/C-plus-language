#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j,temp;
		int arr[10]={12,34,56,78,45,65,67,98,23,40};
		for(i=0; i<10; i++)
		{
			for(j=i+1; j<10; j++)
			{
				if(arr[j]>arr[i])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		cout<<"printing descending order sorted element list..."<<endl;
		for(i=0; i<10; i++)
		{
			cout<<endl<<" "<<arr[i];
		}
		for(i=0; i<10; i++)
		{
			for(j=i+1; j<10; j++)
			{
				if(arr[j]<arr[i])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		cout<<"\nprinting Acending order sorted element list..."<<endl;
		for(i=0; i<10; i++)
		{
			cout<<endl<<" "<<arr[i];
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