#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private:
		string name;
		int age;
		string position;
		double salary;
		
		public:
			void setdata(string empname,int empage,string empposition,double empsalary)
			{
				name = empname;
				age = empage;
				position = empposition;
				salary = empsalary;
			}
			void displaydata()
			{
				cout<<"name:"<<name<<endl;
				cout<<"age:"<<age<<endl;
				cout<<"position:"<<position<<endl;
				cout<<"salary:"<<salary<<endl;
			}
};
int main ()
{
	Employee emp;
	
	string name,position;
	int age;
	double salary;
	
	cout<<"Enter employee name:";
	getline(cin, name);
	cout<<"Enter employee age:";
	cin>>age;
	cout<<"Enter employee position:";
	getline(cin, position);
	cout<<"Enter employee salary:";
	cin>>salary;
	
	emp.setdata(name,age,position,salary);
	
	cout<<"\nEmployee Details:"<<endl;
	emp.displaydata();
	
	return 0; 
}
