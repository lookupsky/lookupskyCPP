#include "point.h"
#include <iostream>
#include <math.h>

Point::Point()
{
	m_x = 0.0;
	m_y = 0.0;
}

Point::Point(float x,float y)
{
		set(x,y);
}

bool Point::is_zero(Point& point)
{
	return (point.m_x == 0.0 && point.m_y == 0.0)?true:false;
}

float Point::add(Point& point)
{
		return point.my_x + point.my_y;
}

float Point::length(Point& point)
{
		return sqrt((point.my_x * point.my_x) + (point.my_y * point.my_y));
}

void Point::set(float x,float y)
{
		m_x = x;
		m_y = y;
}

float Point::get_x(Point& point)
{
	return point.m_x;
}

float Point::get_y(Point& point)
{	
	return point.m_y;
}


