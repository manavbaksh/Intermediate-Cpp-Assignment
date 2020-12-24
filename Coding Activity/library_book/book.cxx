#include "book.h"
#include<iostream>
using namespace std;
Book::Book():m_isbn(0),m_title(""),m_author(""),m_year(0),m_price(0.0),m_pages(0)
{

}
Book::Book(int id,string title, string auth,int yr, double rs, int pg):m_isbn(id),m_title(title),m_author(auth),m_year(yr),m_price(rs),m_pages(pg)
{

}
int Book::isbn() const
{
    return m_isbn;
}
string Book::title() const
{
    return m_title;
}
string Book::author() const
 {
    return m_author;
 }
int Book::year() const
{
    return m_year;
}
double Book::price() const
{
    return m_price;
}
int Book::pages() const
{
    return m_pages;
}
void Book::display() const
{
    cout << "Book Id --" << m_isbn <<"\n" 
         << "Book Title  --" << m_title <<"\n"
         << "Book Author --" << m_author <<"\n"
         << "published on  --" << m_year <<"\n"
         << "Book price  --" << m_price <<"\n"
         << "no. of pages --" << m_pages <<"\n"  ; 
}