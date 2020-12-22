#include "distance.h"
#include <gtest/gtest.h>
using namespace std;


TEST(Distance, EmptyConnstructor) 
{
    	Distance C1;
    	Distance C2;
    	Distance C3 = (C1 + C2);
    	
    	EXPECT_EQ(0, C3.getfeet());
    	EXPECT_EQ(0, C3.getinch());
}

TEST(Distance, add) 
{
	Distance C1(11,5);
    	Distance C2(9,5);
    	
    	Distance C3 = (C1 + C2);
    	
    	Distance C5 = (C1 + 3);
    	
    	EXPECT_EQ(20, C3.getfeet());
	EXPECT_EQ(10, C3.getinch());
		
	EXPECT_EQ(14, C5.getfeet());
	EXPECT_EQ(8, C5.getinch());

}

TEST(Distance, Preincrement) 
{
    	Distance C1(12,8);
    	    	
     	Distance& C4 = ++C1;    	
    	
    	EXPECT_EQ(13, C4.getfeet());
	EXPECT_EQ(9, C4.getinch());	
	
}

TEST(Distance, postincrement) 
{
	Distance C1(12,8);
    	    	
    	Distance C3 = C1++;
    	
    	EXPECT_EQ(12, C3.getfeet());
	EXPECT_EQ(8, C3.getinch());
}
   
TEST(Distance, equals) 
{
	Distance C1(10,2);
    	Distance C2(10,2);    	
    	  	
    	EXPECT_EQ(1, (C1 == C2));
}

