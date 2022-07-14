#include<iostream.h>
#include<conio.h>

class genral
{
	public:
	void gen_data()
	{
	char ch;
	cout<<"enter any alphabet:";
	cin>>ch;
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
	{
		cout<<"vowel";
	}
	else
	{
		cout<<"consonant";
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