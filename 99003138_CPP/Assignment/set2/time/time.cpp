#include"time.h"
#include<iostream>
#include <gtest/gtest.h>

MyTime::MyTime(): m_hours(0), m_minutes(0), m_seconds(0)
{
}
MyTime::MyTime(int hh,int mm,int ss): m_hours(hh), m_minutes(mm), m_seconds(ss)
{
}
MyTime::MyTime(int val1,int val2): m_hours(val1), m_minutes(val1), m_seconds(val2)
{
}

MyTime MyTime:: operator+(const MyTime& a)
{
	int hr = m_hours + a.m_hours;
	int min = m_minutes + a.m_minutes;
	int sec = m_seconds + a.m_seconds;
	
	if(sec >=60)
	{
		min += sec/60;
		sec = sec%60;
	}
	
	if(min >=60)
	{
		hr+=min/60;
		min %=60;
	}
	
	if(hr>=24)
	{
		hr%=24;
	}
	return MyTime(hr,min,sec);
}


	
MyTime MyTime:: operator-(const MyTime& a)
{
	int hr = m_hours - a.m_hours;
	int min = m_minutes - a.m_minutes;
	int sec = m_seconds - a.m_seconds;
	return MyTime(hr,min,sec);
}

void MyTime:: display() const
{
	std::cout << "the time is " << m_hours << ":" << m_minutes << ":" << m_seconds << "\n" ;
}

MyTime MyTime:: operator+(int t1)
{
	int hr1 = m_hours;
	int min1 = m_minutes +t1;
	int sec1 = m_seconds ;
	
	if(sec1 >=60)
	{
		min1 += sec1/60;
		sec1 = sec1%60;
	}
	
	if(min1 >=60)
	{
		hr1+=min1/60;
		min1 %=60;
	}
	
	if(hr1>=24)
	{
		hr1%=24;
	}
	return MyTime(hr1,min1,sec1);
}

MyTime MyTime:: operator-(int t1)
{
	int hr1 = m_hours;
	int min1 = m_minutes - t1;
	int sec1 = m_seconds ;
	
	return MyTime(hr1,min1,sec1);
}

MyTime& MyTime::operator++()
{
    m_hours++;
    m_minutes++;
    m_seconds++;
    return *this;
}
MyTime MyTime ::operator++(int)
{
   MyTime temp(m_hours, m_minutes, m_seconds);
   m_hours++;
   m_minutes++;
   m_seconds++;
   return temp;
}

int MyTime:: gethr()
{
	return m_hours;
}
int MyTime:: getmin()
{
	return m_minutes;
}
int MyTime:: getsec()
{
	return m_seconds;
}

bool MyTime::operator==(const MyTime& ref)
{
    return (m_hours==ref.m_hours)&&(m_minutes == ref.m_minutes)&&(m_seconds == ref.m_seconds);
}



int main( int argc, char **argv) 
{
  MyTime t1(10,45,15);
  MyTime t2(1,15, 45);
  MyTime t3;
  t3 = t1 + t2;    
  t3.display();
  
  MyTime t4;
  t4 = t1 + 50;    
  t4.display();
  
  testing :: InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  return 0;
  
 }

