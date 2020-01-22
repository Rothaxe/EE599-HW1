#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual1 = solution.PrintName();
  std::string expected1 = "Jerry";
  
  std::string actual2 = solution.PrintMajor();
  std::string expected2 = "Major: Electrical Engineering";
    
  std::string actual3 = solution.PrintInterest();
  std::string expected3 = "Basketball";
  EXPECT_EQ(expected1, actual1);
  EXPECT_EQ(expected2, actual2);
  EXPECT_EQ(expected3, actual3);
}