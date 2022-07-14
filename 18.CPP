#include<iostream.h>
#include<conio.h>

void main()
{       char ch;
	int num;
	clrscr();
	cout<<"enter character:";
	cin>>ch;
	cout<<"character ascii value="<<(int)ch;
	num=(int)ch+3;
	cout<<"addtion after adding 3="<<num<<endl;
	cout<<"alphabet after adding 3="<<(char)num<<endl;
	getch();
}