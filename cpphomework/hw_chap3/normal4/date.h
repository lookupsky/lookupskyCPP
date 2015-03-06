#ifndef _DATE_H_
#define _DATE_H_

namespace iotek{

class  Date{

public:

				Date();
				Date(int ,int ,int);

				void get_year(int& year);
				void get_month(int& month);
				void get_day(int& day);

				void set_date(int year, int month, int day);

				void display_date();
				void print_error();
				bool is_leap_year(int& year);

private:

				int m_year;
				int m_month;
				int m_day;

};

}
#endif
