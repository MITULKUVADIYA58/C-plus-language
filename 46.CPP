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
	switch(ch)
	{       case 'a':
		cout<<"vowel";
		break;

		case 'e':
		cout<<"vowel";
		break;

		case 'i':
		cout<<"vowel";
		break;

		case 'o':
		cout<<"vowel";
		break;

		case 'u':
		cout<<"vowel";
		break;

		default:
		cout<<"consonut";
		break;
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