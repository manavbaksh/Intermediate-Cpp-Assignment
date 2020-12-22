#include <iostream>
#include<string>
#include"AccountBase.h"
#include"creditaccount.h"
#include"savingsaccount.h"

using namespace std;

    AccountBase::AccountBase():m_accNumber(""), m_accName(""), m_balance(0)
    {
    }
    AccountBase::AccountBase(string accnum,string accname,double balance):
        m_accNumber(accnum), m_accName(accname), m_balance(balance)
        {
        }
    AccountBase::AccountBase(string accnum,string accname):
        m_accNumber(accnum), m_accName(accname), m_balance(0)
        {
        }
    AccountBase::AccountBase(const AccountBase &ref):
        m_accNumber(ref.m_accNumber), m_accName(ref.m_accName), m_balance(ref.m_balance)
        {
        }
    SavingsAccount::SavingsAccount(){}

    SavingsAccount::SavingsAccount(string accnum,string accname,double balance):AccountBase(accnum,accname,balance){}

    SavingsAccount::SavingsAccount(string accnum,string accname):AccountBase(accnum,accname){}

    CreditAccount::CreditAccount(){}

    CreditAccount::CreditAccount(string accnum,string accname,double balance):AccountBase(accnum,accname,balance){}

    CreditAccount::CreditAccount(string accnum,string accname):AccountBase(accnum,accname){}


    void AccountBase::debit(double amt)
    {
        m_balance-=amt;

    }
    void AccountBase::credit(double amnt)
    {
        m_balance+=amnt;

    }
    double AccountBase::getBalance()const
    {
        
        return m_balance;
    }
    void AccountBase::display()const
    {
        cout<<m_accNumber<<endl;
        cout<<m_accName<<endl;
        cout<<m_balance<<endl;
    }


    void CreditAccount::display() const
    {
        cout<<"Credit Account\n";
    }


    void SavingsAccount::display() const
    {
        cout<<"Savings Account\n";
    }
