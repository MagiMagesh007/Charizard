#include<iostream>
using namespace std;
class acc
{
	public:
		float sal=60000.00;
};
class pro:public acc
{
	public:
		float bon=5000.00;
};
int main(void)
{
	pro p1;
	cout<<"Salary: "<<p1.sal<<endl;
	cout<<"Bonus:"<<p1.bon<<endl;
	return 0;
}
