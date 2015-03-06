#include <iostream>
#include "outputinfo.h"

using namespace std;
using namespace iotek;

int main(int argc, char *argv[])
{
	int old = 0;

	cout << "please input yearold:";
	cin >> old;
	
	if(argc != 2)
		cout << "My name is error!" << endl;
	else
		output_info(argv[1],old);

	return 0;
}
