#include <iostream>
using namespace std;

inline int my_max(int ,int);
inline int my_min(int ,int);

int main()
{
	int a = 5;
	int b = 6;
	int max = my_max(a,b);
	int min = my_min(a,b);

	cout << "max(a,b) = " << max << endl;
	cout << "min(a,b) = " << min << endl;
	
	return 0;
}

inline int my_max(int a,int b)
{
	return a > b ? a : b;
}

inline int my_min(int a,int b)
{
	return a > b ? b : a;
}
