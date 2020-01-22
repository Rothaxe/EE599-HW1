#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, ShouldSuccess) {
  Solution solution;
  std::vector<int> input1 = {3, 17, 19, 33, 68, 79, 95};
  double actual1 = solution.FindMedian(input1);
  double expected1 = 33;

  std::vector<int> input2 = {};
  double actual2= solution.FindMedian(input2);
  double expected2 = INT32_MIN;

  EXPECT_DOUBLE_EQ(expected1, actual1);
  EXPECT_DOUBLE_EQ(expected2, actual2);
}

TEST(FindMedianTest, ShouldFail) {
  Solution solution;
  std::vector<int> input1 = {};
  double actual1 = solution.FindMedian(input1);
  double expected1 = -1;

  std::vector<int> input2 = {17, 19, 499, 700, 1099, 3076, 9077, 20000};
  double actual2 = solution.FindMedian(input2);
  double expected2 = 899;

  EXPECT_DOUBLE_EQ(expected1, actual1);
  EXPECT_DOUBLE_EQ(expected2, actual2);
}