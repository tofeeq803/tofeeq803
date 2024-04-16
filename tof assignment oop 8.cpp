#include<iostream>
using namespace std;
class Myclass
{
	private:
		
	static int count;
	
	public:
		static void displaycount()
		{
			cout<<"count:"<<count<<endl;
		}
		Myclass()
		{
			count++;
		}
		~Myclass()
		{
			count--;
		}
};
int Myclass::count = 0;
int main()
{
	Myclass obj1;
	Myclass obj2;
	Myclass obj3;
	
	Myclass::displaycount();
	{
		Myclass obj4;
		Myclass::displaycount();
	}
	Myclass::displaycount();
	
	return 0;
}
