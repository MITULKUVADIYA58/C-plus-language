#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j,r1,c1,r2,c2,k;
		int arr1[10][10],arr2[10][10],multi[10][10];
		cout<<"enter row & column size for 1st matrix:";
		cin>>r1>>c1;
		cout<<"enter row & column size for 2nd matrix:";
		cin>>r2>>c2;
		while(c1 != r2)
		{
			cout<<"error column of 1st matrix not equal to row of 2nd matrix:";
			cout<<"enter row & column size for 1st matrix:";
			cin>>r1>>c1;
			cout<<"enter row & column size for 2nd matrix:";
			cin>>r2>>c2;
		}
		cout<<"\nenter elements of matrix:"<<endl;
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c1; j++)
			{
				cout<<"enter element arr1["<<i<<"]["<<j<<"]=";
				cin>>arr1[i][j];
			}
		}
		cout<<"\nenter elements for matrix2:"<<endl;
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c2; j++)
			{
				cout<<"enter element arr2["<<i<<"]["<<j<<"]=";
				cin>>arr2[i][j];
			}
		}
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				multi[i][j]=0;
			}
		}
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				for(k=0; k<c1; k++)
				{
					multi[i][j]+=arr1[i][k]*arr2[k][j];
				}
			}
		}
		cout<<endl<<"output of matrix:"<<endl;
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
				cout<<" "<<multi[i][j];
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