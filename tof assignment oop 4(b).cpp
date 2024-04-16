#include<iostream>
#include<string>
using namespace std;
string maxstring(const string a,string b,string c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	else if (b >= a && b >= c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int main ()
{
	string str1,str2,str3;
	
	cout<<"Enter three strings:";
	cin>>str1>>str2>>str3;
	
	string maximum = maxstring(str1,str2,str3);
	
	cout<<"Maximum string:"<<maximum<<endl;
	
	return 0;
}
