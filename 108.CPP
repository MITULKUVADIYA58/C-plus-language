#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int arr1[10],arr2[20],arrmerge[40];
		int num1,num2,i,k;

		cout<<"enter 1st array size:";
		cin>>num1;

		cout<<"enter "<<num1<<" elements in array"<<endl;
		for(i=0; i<num1; i++)
		{
			cin>>arr1[i];
			arrmerge[i]=arr1[i];
		}
		k=i;
		cout<<endl<<"enter 2nd array size:";
		cin>>num2;

		cout<<"enter "<<num2<<" elements in array"<<endl;
		for(i=0; i<num2; i++)
		{
			cin>>arr2[i];
			arrmerge[k]=arr2[i];
			k++;
		}
		cout<<"the merged array"<<endl;
		for(i=0; i<k; i++)
		{
			cout<<arrmerge[i]<<" ";
		}
		cout<<endl;
	}
};
void main()
{
	clrscr();
	genral g1;
	g1.gen_data();
	getch();
}