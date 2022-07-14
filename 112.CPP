#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j,r,c;
		int arr1[10][10],arr2[10][10],sum[10][10];
		cout<<"enter row size ";
		cin>>r;
		cout<<"enter column size ";
		cin>>c;
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				cout<<"enter element arr1["<<i<<"]["<<j<<"]=";
				cin>>arr1[i][j];
			}
		}
		cout<<"\nnow 2nd array elements\n \n";
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				cout<<"enter element arr2["<<i<<"]["<<j<<"]=";
				cin>>arr2[i][j];
			}
		}
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				sum[i][j]=arr1[i][j]+arr2[i][j];
			}
		}
		cout<<"\nsum of 2 matrix is=\n";
		for(i=0; i<r; i++)
		{
			for(j=0; j<c; j++)
			{
				cout<<sum[i][j]<<" ";
			}
			cout<<endl;
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