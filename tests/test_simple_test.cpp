//
// Created by Juha-Matti Tirila on 21/06/2017.
//

#include <gtest/gtest.h>
#include "simple_test.h"
# include <iostream>

using namespace std;

TEST(MySimpleTest, Positives) {
ASSERT_EQ(2, just_test());
}

TEST(MySimpleTest, Negatives) {
ASSERT_NE(3, just_test());
}

int main(int argc, char **argv) {
  cout << "Starting tests" << endl;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
