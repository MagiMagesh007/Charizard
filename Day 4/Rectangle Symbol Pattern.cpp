#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	char c;
	cout<<"enter the length of row :: ";
	cin>>a;
	cout<<"enter the length of column :: ";
	cin>>b;
	cout<<"enter the charcter :: ";
	cin>>c;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(i==0 || i==a-1 || j==0 || j==b-1)
			{
				cout<<" "<<c<<" ";
			}
			else
			{
				//cout<<"   ";        //this is for hallow square or recrangle)         
				cout<<" "<<c<<" ";     //this is for full square or recrangle)
			}
		}
		cout<<"\n";
	}
	return 0;
}
