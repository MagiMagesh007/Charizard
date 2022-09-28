#include<iostream>
using namespace std;
int main()
{
	int n=5,i,j,p=1;
	for(i=n;i>0;i--)
	{
		cout<<" ";
		for(j=1;j<=n;j++)
		{
			if(j>=i)
			{
				cout<<p<<" ";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
		p++;
	}
}

