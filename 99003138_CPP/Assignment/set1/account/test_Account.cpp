#include "Account.h"
#include <gtest/gtest.h>
namespace {
TEST(Account, Empty_Cosnstructor) {
    Account A1;
  EXPECT_EQ(0.0, A1.getBalance());
 
}

TEST(Account, Parameterized_Cosnstructor) {
    Account A1 ("5","Manav",1000);
  EXPECT_EQ(1000,A1.getBalance());

}

TEST (account,Transaction)
{
    Account A1("5","Manav",1000);
    A1.debit(100);
    A1.credit(100.5);
    EXPECT_EQ(1000.5,A1.getBalance());
}
}