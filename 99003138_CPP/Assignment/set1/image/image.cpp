#include <iostream>
#include"image.h"

using namespace std;

Image::Image():m_x(0), m_y(0),m_width(0), m_height(0)
{
}
Image::Image(int x,int y,int width,int height):m_x(x), m_y(y),m_width(width), m_height(height)
{
}
Image::Image(const Image &ref):m_x(ref.m_x), m_y(ref.m_y),m_width(ref.m_width), m_height(ref.m_height)
{
}
void Image::move(int horizontal,int vertical)
{
    m_x+=horizontal;
    m_y+=vertical;
}
void Image::scale(int size)
{
    m_width*=size;
    m_height*=size;
}
void Image::resize(int width,int height)
{
    m_width=width;
    m_height=height;
}
void Image::display() const
{
    cout<<"x="<<m_x<<endl;
    cout<<"y="<<m_y<<endl;
    cout<<"width="<<m_width<<endl;
    cout<<"height="<<m_height<<endl;
}

