#include<iostream>
using namespace std;
void sortNumbers(int num1,int num2)
{
	if (num1>num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
 } 
 int main ()
 {
 	int a,b;
 	
 	cout<<"Enter two numbers:";
 	cin>>a>>b;
 	
 	sortNumbers(a, b);
 	
 	cout<<"sorted numbers:"<<a<<" "<<b<<endl;
 	
 	return 0;
 }
