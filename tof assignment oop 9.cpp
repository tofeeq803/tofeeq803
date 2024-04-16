#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
		
		public:
			Distance()
			{
				feet = 0;
				inches = 0;
			}
			void input_distance()
			{
				cout<<"Enter feet:";
				cin>>feet;
				cout<<"Enter inches:";
				cin>>inches;
			}
			void output_distance()
			{
				cout<<"Distance:"<<feet<<"feet"<<inches<<"inches"<<endl;
			}
			void add_distance(const Distance dist1,const Distance dist2)
			{
				feet = dist1.feet + dist2.feet;
				inches = dist1.inches + dist2.inches;
				
				if(inches >= 12)
				{
					feet += inches/12;
					inches %= 12;
				}
			}
};
int main ()
{
	Distance distance1, distance2;
	
	cout<<"Enter the first distance:"<<endl;
	distance1.input_distance();
	cout<<"\nEnter the second distance:"<<endl;
	distance2.input_distance();
	
	Distance sum_distance;
	sum_distance.add_distance(distance1,distance2);
	cout<<"\nSum of the distance:"<<endl;
	sum_distance.output_distance();
	
	return 0;
}
