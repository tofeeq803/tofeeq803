#include<iostream>
#include<string>
using namespace std;
class EMPLOYEE
{
	private:
		string empcode;
		string empname;
		
		public:
			void getdata()
			{
				cout<<"Enter employee code:";
				cin>>empcode;
				cout<<"Enter employee name:";
				cin>>empname;
			}
			void display()
			{
				cout<<"Employee code:"<<empcode<<endl;
				cout<<"Employee name:"<<empname<<endl;
			}
};
int main ()
{
	const int NUM_EMPLOYEES = 0;
	EMPLOYEE EMP[NUM_EMPLOYEES];
	
	for(int i=0; i<NUM_EMPLOYEES; ++i)
	{
		cout<<"Enter details for employee"<<i+1<<":"<<endl;
		EMP[i].getdata();
	}
	cout<<"Details of all employees:"<<endl;
	for(int i=0; i<NUM_EMPLOYEES; ++i)
	{
		cout<<"Employee"<<i+1<<":"<<endl;
		EMP[i].display();
		cout<<endl;
	}
	return 0;
}
