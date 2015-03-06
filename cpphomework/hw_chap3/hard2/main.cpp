#include "string.h"
using namespace my;

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	String *ptr = new String("zhang san");
	ptr->append('Q');
	ptr->display();

	ptr->append(" shanghai");
	ptr->display();

	ptr->chomp();
	ptr->display();

	char ch = ptr->char_at_index(4);
	cout << "index 4 " << ch << endl;

	String ptr1 = *ptr;
	ptr1.display();

	if(ptr1.compare("li si"))	
		cout << "equal!" << endl;
	else
		cout << "not equal!" << endl;

	delete ptr;

	return 0;
}
