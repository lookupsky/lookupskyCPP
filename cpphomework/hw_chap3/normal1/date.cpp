#include "date.h"
using namespace iotek;

#include <iostream>
using namespace std;

Date::Date()
{
	m_year = 1970;
	m_month = 1;
	m_day = 1;
}

Date::Date(int year,int month,int day)
{
	set_date(year,month,day);
}

void Date::get_year(int& year)
{
	year = m_year;
}

void Date::get_month(int& month)
{
	month = m_month;
}

void Date::get_day(int& day)
{
	day = m_day;
}

void Date::set_date(int year, int month, int day)
{
	if(year < 0)
	{
		print_error();
		return;
	}
	else
		m_year = year;

	if(month > 12 || month < 1)
	{
		print_error();
		return;
	}
	else	
		m_month = month;

	if(month == 1 || month == 3 ||month == 5 ||month == 6 ||month == 7 || month == 8 || month ==10 || month ==12)
	{
		if(day > 31 || day < 0)
		{
			print_error();
			return;
		}
		else
			m_day = day;
	}else if(month == 2){
		if(is_leap_year(year))
		{
			if(day > 28 || day < 0)
			{
				print_error();
				return;
			}
			else
				m_day = day;
		}else{
			if(day > 27 || day < 0)
			{
				print_error();
				return;
			}
			else
				m_day = day;
		}
	}else{
		if(day > 30 || day < 0)
		{
			print_error();
			return;
		}
		else
			m_day = day;
	}
}

void Date::display_date()
{
	cout << m_year << "年" << m_month << "月" << m_day << "日" << endl;
}

void Date::print_error()
{
	cout << "input date error!" << endl;
}

bool Date::is_leap_year(int& year)
{
	if(year % 400 == 0 )
		return true;
	else if((year % 4 == 0) && (year % 100 != 0))
		return true;
	else
		return false;
}
