#include "time.h"
using namespace iotek;

#include <iostream>
using namespace std;

int main()
{
	Time time1;
	
	time1.set_time(16,52,24);
	time1.am_pm_display_time(time1);
	time1.hour24_display_time(time1);

	Time time2;

	time2.set_time(21,32,16);

	time1.am_pm_display_time(time2);
	time2.hour24_display_time(time2);

	int sub = Time::sub_time(time1,time2);

	cout << "time2 - time1 = " << sub << "s" << endl;

	return 0;
}
