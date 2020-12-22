#include "distance.h"

Distance:: Distance(): m_feets(0), m_inches(0)
{
}
Distance:: Distance(int feet,int inch): m_feets(feet), m_inches(inch)
{
}
Distance:: Distance(int val): m_feets(val), m_inches(val)
{
}

Distance Distance::operator+(const Distance& dist1)
{
	int ft = m_feets + dist1.m_feets;
	int inch = m_inches + dist1.m_inches;
	
	if(inch >=12)
	{
		ft += inch/12;
		inch = inch %12;
	}
	return Distance(ft, inch);
}

Distance Distance::operator-(const Distance& dist2)
{
	int ft = m_feets - dist2.m_feets;
	int inch = m_inches - dist2.m_inches;
	return Distance(ft, inch);
	
}

Distance Distance::operator+(int x)
{
	int ft = m_feets + x;
	int inch = m_inches + x;
	
	if(inch >=12)
	{
		ft += inch/12;
		inch = inch %12;
	}
	return Distance(ft, inch);
}


Distance Distance::operator-(int x)
{
	int ft = m_feets - x;
	int inch = m_inches - x;
	return Distance(ft, inch);
}

Distance& Distance::operator++()
{
	m_feets++;
	m_inches++;
	return *this;
}

Distance Distance::operator++(int)
{
	Distance temp (m_feets, m_inches);
	m_feets++;
	m_inches++;
	return temp;
	
}

bool Distance::operator==(const Distance& ref)
{
	return ((m_feets == ref.m_feets) && (m_inches==ref.m_inches));
}

int Distance:: getfeet()
{
	return m_feets;
}

int Distance:: getinch()
{
	return m_inches;
}
