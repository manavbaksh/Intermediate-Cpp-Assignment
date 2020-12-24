#ifndef __BOOK_H
#define __BOOK_H
#include<string>
#include<list>
using namespace std;
class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  //std::string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
    Book();
    Book(int ,string, string, int , double , int );
    int isbn() const;
    string title() const;
    string author() const;
    int year() const;
    double price() const;
    int pages() const;
    void display() const;
  //TODO: param ctor
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  //TODO:- display
  //TODO:- const suffix for immutable function

};
#endif
