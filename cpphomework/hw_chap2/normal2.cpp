#include <iostream>
using namespace std;

int add(int& a,int& b)
{
	int c = a + b;

	return c;
}

double add(double& a,double& b)
{
	double c = a + b;

	return c;
}

int main()
{
	int a = 4;
	int b = 5;
	
	cout << "a + b = " << add(a,b) << endl;

	double c = 4.4;
	double d = 5.5;

	cout << "c + d = " << add(c,d) << endl;

	return 0;
}
