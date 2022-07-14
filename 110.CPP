#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
		int i,j;
		int arr[4][3]={ {1,2,3},{2,3,4},{3,4,5,},{4,5,6} };
		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{
				cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<endl;
			}
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