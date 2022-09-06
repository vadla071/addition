#include<iostream>
int main()
{
	int i,j,k,n,a[100][100],b[100][100],s[100][100];
	std::cout<<"enter the 1st matrix";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		
		{
			std::cin>>a[i][j];
		}
	}
	std::cout<<"enter the 2nd matrix";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			std::cin>>b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j] + b[i][j];
			
		}
	}
	std::cout<<"\n"<<"sum of two matrix"<<"\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			std::cout<<s[i][j]<<" ";
		}
	}
	return 0;
}