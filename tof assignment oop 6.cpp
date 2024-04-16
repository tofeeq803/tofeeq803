#include<iostream>
using namespace std;
class Item
{
	private:
		int number;
		double cost;
		
		public:
			void putdata()
			{
				cout<<"number:"<<number<<endl;
				cout<<"cost:"<<cost<<endl;
			}
			void getdata(int n,double c)
			{
				number = n;
				cost = c;
			}
};
int main ()
{
	Item item;
	
	int num;
	double price;
	
	cout<<"Enter the number of the item:";
	cin>>num;
	cout<<"Enter the cost of the item:";
	cin>>price;
	
	item.getdata(num, price);
	item.putdata();
	
	return 0;
}
