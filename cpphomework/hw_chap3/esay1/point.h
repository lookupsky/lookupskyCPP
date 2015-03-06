#ifndef _POINT_H_
#define _POINT_H_

class Point{

public:
	
	Point();
	Point(float,float);
	bool is_zero(Point&);
	float add(Point&);
	float length(Point&);
	void set(float x,float y);
	float get_x(Point&);
	float get_y(Point&);
private:

	float m_x;
	float m_y;

};

#endif
