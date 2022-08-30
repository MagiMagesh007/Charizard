//Write a C++ Program to display Names, Roll No., and grades of 3 students who
//have appeared in the examination. Declare the class of name, Roll No. and
//grade. Create an array of class objects. Read and display the contents of
//the array.
#include<iostream>
using namespace std;
class school
{
	char nam1[20],gra;
	int rn;
	public:
		void getdata();
		void putdata();
};
void school::getdata()
{
	cout<<"Enter The Student Name: ";
	cin>>nam1;
	cout<<"Enter The Roll no: ";
	cin>>rn;
	cout<<"Enter The Grade: ";
	cin>>gra;
}
void school::putdata()
{
	cout<<"\nStudent Name Is "<<nam1;
	cout<<"\nRoll No Is "<<rn;
	cout<<"\nGrade= "<<gra;
}
int main()
{
	school a[10];
	int n,i,j;
	cout<<"Enter The Total No Of Student: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i].getdata();
	}
	
	for(j=0;j<n;j++)
	{
		a[j].putdata();
	}
}
