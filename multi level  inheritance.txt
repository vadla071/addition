#include<iostream>
class base
{
	public:
		void a()
		{
			std::cout<<"a";
		}
};
class Derived:public base
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};
class Derived2:public Derived
{
	public:
		void d()
		{
			std::cout<<"d";
		}
};
int main()
{
	Derived2 obj;
	obj.b();
	obj.a();
	obj.d();
	return 0; 
}