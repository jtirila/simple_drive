//
// Created by Juha-Matti Tirila on 21/06/2017.
//

#include <gtest/gtest.h>
#include "UnoRandomDrive.h"
# include <iostream>

using namespace std;

TEST(MyUnoMockDrive, Positives) {
  ASSERT_EQ(1, UnoRandomDrive().drive());
}

int main(int argc, char **argv) {
  cout << "Starting tests" << endl;
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
