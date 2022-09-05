#include<iostream>
int main()
{
	int a,b,c,d;
	a=5;
	b=6;
	std::cout<<"enter the choice;1-add,2-sub\n";
	std::cin>>c;
	switch(c)
	{
		case 1:
		{
			d=a+b;
			std::cout<<d;
			break;
		}
		case 2:
		{
			d=a-b;
			std::cout<<d;
			break;
		}
		default:
			std::cout<<"invalid choice";
			break;
	}

	return 0;
}