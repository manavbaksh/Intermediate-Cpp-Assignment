#include "Customer.h"
#include <gtest/gtest.h>
namespace{
TEST(Customer,Empty_Cosnstructor) {
    Customer C1;
    C1.credit(0);
    C1.makeCall(0);
    EXPECT_EQ(0.0,C1.getBalance());

}

TEST(Customer,Parameterized_Cosnstructor) {
    Customer C1("2306","Manav","Nokia",0);
    C1.credit(149);
    C1.makeCall(49);
    EXPECT_EQ(100.0,C1.getBalance());

}

TEST(Customer,Copy_Cosnstructor) {
    Customer C1("2306","Manav","Nokia",100);
    Customer C2(C1);
    C2.credit(149);
    C2.makeCall(49);
    EXPECT_EQ(200.0,C2.getBalance());
}
}

