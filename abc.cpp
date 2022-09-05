#include<iostream>
int main()
{
	int a,b;
	a=6;
	b=9;
	c=12;
	if(a>b && a>c)
	{
	    std::cout<<"a is greater";
	}
	else if(b>a && b>c)
	{
	    std::cout<<"b is greater";
	}
	else
	{
	    std::cout<<"c is greater";
	}
	return 0;
}