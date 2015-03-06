#ifndef _TIME_H_
#define _TIME_H_

namespace iotek{

class Time{

public:

	Time();
	Time(int ,int ,int);
	void set_time(int ,int ,int);
	void am_pm_display_time(Time&);
	static int sub_time(Time&,Time&);
	void hour24_display_time(Time&);

private:
	
	int m_hour;
	int m_minute;
	int m_second;

};

}

#endif
