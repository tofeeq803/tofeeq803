#include<iostream>
using namespace std;
class COMPLEX
{
	private:
		double real;
		double imaginary;
		
		public:
			COMPLEX(double r = 0, double i = 0) : real(r), imaginary(i)
			{
			}
			friend COMPLEX addcomplex(const COMPLEX c1,const COMPLEX c2);
			void display()
			{
				if (imaginary >= 0)
				{
					cout<<real<<"+"<<imaginary<<"i"<<endl;
				}
				else
				{
					cout<<real<<"-"<<-imaginary<<"i"<<endl;
				}
			}
};
COMPLEX addcomplex(const COMPLEX c1,const COMPLEX c2)
{
	double realsum = c1.real + c2.real;
	double imagsum = c1.imaginary + c2.imaginary;
	return COMPLEX(realsum, imagsum);
	
}
int main()
{
	COMPLEX num1(3,2);
	COMPLEX num2(1,-5);
	
	cout<<"First complex number:";
	num1.display();
	cout<<"Second complex number:";
	num2.display();
	
	COMPLEX sum = addcomplex(num1,num2);
	cout<<"sum of the two complex numbers:";
	sum.display();
	
	return 0;
}



