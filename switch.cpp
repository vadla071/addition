#include<iostream>
int main()
{
	int a,b,c,d,e,f,g;
	a=5;
	b=6;
	std::cout<<"enter the choice;1-add,2-sub\n,3-mul\n,4-div\n,5-modulus";
	std::cin>>c;
	switch(c)
	{
		case 1:
		{
			c=a+b;
			std::cout<<c;
			break;
		}
		case 2:
		{
			d=a-b;
			std::cout<<d;
			break;
		}
		case 3:
		{
			e=a*b;
			std::cout<<e;
			break;
		}
		case 4:
		{
			f=a/b;
			std::cout<<f;
			break;
		}
		case 5:
		{
			g=a%b;
			std::cout<<g;
			break;
		}
		default:
			std::cout<<"invalid choice";
			break;
	}

	return 0;
}