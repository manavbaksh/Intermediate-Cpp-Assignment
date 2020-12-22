#include "Point.h"
#include <cmath>
#include <iostream>
Point::Point():m_x(0),m_y(0)
{
}
Point::Point(int x, int y):m_x(x),m_y(y)
{
}
Point::Point(const Point& ref):m_x(ref.m_x), m_y(ref.m_y)
{
}
Quadrant Point::quadrant() const
{
    if(m_x >0 && m_y >0)
        return Q1;
    else if(m_x <0 && m_y >0)
        return Q2;
    else if(m_x <0 && m_y <0)
        return Q3;
    else
        return Q4;   
}
double Point::distanceFromOrigin()  const
{
    return sqrt((m_x*m_x)+(m_y*m_y));
}
bool Point::isOrigin() const{
	if(m_x==0 && m_y==0)
		return true;
    else    
	    return false;
}

bool Point::isOnXAxis() const{
	if((m_x>0 || m_x<0) && m_y==0)
		return true;
    else   
	    return false;
}

bool Point::isOnYAxis() const{ 
	if((m_y>0 || m_y<0) && m_x==0)
		return true;
    else    
	    return false;
}

void Point::display() const 
{
    std::cout << "x-axis" << m_x
              << "y-axis" << m_y;
}
