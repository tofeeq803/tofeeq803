#include<iostream>
using namespace std;
template <typename T>
T max(T a,T b,T c)
{
	return max(max(a, b), c);
}
int main()
{
	int num1,num2,num3;
	
	cout<<"Enter three numbers:";
	cin>>num1>>num2>>num3;
	
	int maximum = max(num1,num2,num3);
	
	cout<<"Maximum number:"<<maximum<<endl;
	
	return 0;
}
