#include "point.h"
#include <iostream>
using namespace std;

int main(int argc ,char *argv[])
{
	Point a(4.0,5.0);
	
	if(a.is_zero())
		cout << "this point is zero!" << endl;
	else
		cout << "this point is not zero!" << endl;
	
	cout << "point a.x + a.y = " << a.add() << endl;
	cout << "this point a to zero lenth is :" << a.length() << endl;

	return 0;
}
