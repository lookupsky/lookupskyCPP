#include "time.h"
using namespace iotek;

#include <iostream>
using namespace std;


Time::Time()
{
	m_hour = 0;
	m_minute = 0;
	m_second = 0;
}

Time::Time(int hour,int minute,int second)
{
	m_hour = hour;
	m_minute = minute;
	m_second = second;
}

void Time::set_time(int hour,int minute,int second)
{
	m_hour = hour;
	m_minute = minute;
	m_second = second;
}

void Time::am_pm_display_time(Time& time)
{

	if(time.m_hour <= 12)
		cout << "am " << time.m_hour << ":" << time.m_minute << ":" << time.m_second << endl;
	else
		cout << "pm " << time.m_hour - 12 << ":" << time.m_minute << ":" << time.m_second << endl;

}

int Time::sub_time(Time& time1,Time& time2)
{
		return (time2.m_hour - time1.m_hour) * 24 * 60 + (time2.m_minute - time1.m_minute) * 60 + (time2.m_second - time1.m_second);
}

void Time::hour24_display_time(Time& time)
{
	cout << time.m_hour << ":" << time.m_minute << ":" << time.m_second << endl;
}


