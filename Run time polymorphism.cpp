//demonstrate the concept of Run time polymorphism USING VIRTUAL FUNCTION
#include <fstream>
#include <iostream>
using namespace std;

// Declaration of Base class
class operation {
public:
	// Usage of virtual constructor
	virtual void calculate()
	{
		cout << "Addion of your given input ";
	}
};
// Declaration of Derived calss
class Addition1 : public operation {
public:
	int num1, num2, addition;

	void calculate()
	{
		cout << "Enter value of num1 : ";
		cin >> num1;

		cout << "Enter value of  num2 : ";
		cin >> num2;

		addition = num1 + num2;
		cout << "Addition of numbers are: " << addition<< "\n";
	}
};
// Declaration of 2nd derived class
class Addition2 : public operation {
public:
	int num1,num2,num3, addition;

	void calculate()
	{
		cout << "Enter value of  num1 : ";
		cin >> num1;
		cout<<"Enter value of num2 :";
		cin>>num2;
		cout<<"Enter value of num3 :";
		cin>>num3;
		addition=num1+num2+num3;
		cout << "Addition of numbers are : " << addition;
	}
};

int main()
{
    // base class pointer
	operation* op;
	Addition1 ad1;

	// initilization of reference variable
	op = &ad1;

	// calling of Rectangle function
	op->calculate();
	Addition2 ad2;

	// initilization of reference variable
	op = &ad2;

	// calling of Square function
	op->calculate();

	// return 0 to tell the program executed
	// successfully
	return 0;
}
