#include "AccountBase.h"
#include"savingsaccount.h"
#include"creditaccount.h"
#include <gtest/gtest.h>

TEST(AccountBase,SavingsAccount) {
    AccountBase *a1=new SavingsAccount("01","Manav",10000);
    a1->debit(2000);
    a1->credit(3000);
    EXPECT_EQ(11000,a1->getBalance());

}

TEST(AccountBase,CreditAccount) {
    AccountBase *a2=new CreditAccount("02","Baksh",15000);
    a2->debit(5000);
    a2->credit(1000);
    EXPECT_EQ(11000,a2->getBalance());
}


