#include<iostream>
#include "library.h"
#include "library.cpp"
#include "book.cxx"
using namespace std;

int main()
{
    Library lib;
    lib.addBook(1,"alchemist","Paulo",2019,200.0,200);
    lib.addBook(2,"cpp","cpp",2020,110.5,300);
    lib.addBook(3,"abc","xyz",1999,150.5,150);
    lib.addBook(4,"pqr","lmn",2010,410.3,285);
    lib.addBook(5,"stu","wxy",2005,620.0,500);
    lib.addBook(6,"hmm","ett",2012,100.0,93);
    lib.displayAll();
    cout << "----------------------------------" <<endl;
    lib.findBookByISBN(1)->display();
    cout << "----------------------------------" <<endl;

    //cout << lib.findBookByISBN(8) << endl;
    //cout << lib.isBookFound(3) << endl;
    //cout << lib.removeBookByISBN(4) << endl;
    cout << "average price of books - " << lib.findAveragePrice() << endl;
    cout<< "---------------------------" << endl;
    lib.displayAll();
}