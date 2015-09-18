/*
 * Algorithm_test.cpp
 *
 *  Created on: Sep 18, 2015
 *      Author: MacBookEr
 */

#include "gtest/gtest.h"
#include "Algorithm.h"


TEST(EnsureTestsAreWorking, itShouldReturnTrue) {
	Algorithm alg = Algorithm();
	string result = alg.getTestStatus();
	string correct = "Tests are working";
	EXPECT_EQ(correct, result);
}
