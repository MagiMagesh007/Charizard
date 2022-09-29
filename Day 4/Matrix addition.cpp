#include<iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,m,n;
	cout<<"enter the noof rows::";
	cin>>m;
	cout<<"enter the noof cols::";
	cin>>n;	
	cout<<"enter the elements of matrix a::";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the elements of matrix b::";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"The result of addition of matrix a and b is :: ";
	cout<<"\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
