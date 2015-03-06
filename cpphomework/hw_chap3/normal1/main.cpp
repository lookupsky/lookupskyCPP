#include <iostream>

#include "date.h"
using namespace iotek;

int main(int argc ,char *argv[])
{
	Date date;
	date.display_date();

	date.set_date(2014,2,27);
	date.display_date();

	return 0;
}
