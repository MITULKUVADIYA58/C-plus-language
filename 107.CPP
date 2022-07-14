#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int arr[20],size,i,del,count=0;
		cout<<"enter array size=";
		cin>>size;

		cout<<endl<<"enter array element="<<endl;
		for(i=0; i<size; i++)
		{
			cin>>arr[i];
		}
		cout<<"enter element to delete:";
		cin>>del;
		for(i=0; i<size; i++)
		{
			if(arr[i]==del)
			{
				for(int j=i; j<(size-1); j++)
				{
					arr[j]=arr[j+1];
				}
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<"element no found"<<endl;
		}
		else
		{
			cout<<endl<<"element deleted successfully"<<endl;
			cout<<endl<<"now the new array is"<<endl;
			for(i=0; i<(size-1); i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		cout<<" "<<endl;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}