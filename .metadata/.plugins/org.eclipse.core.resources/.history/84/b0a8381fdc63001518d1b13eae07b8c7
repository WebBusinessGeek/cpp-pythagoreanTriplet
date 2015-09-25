/*
 * Algorithm_test.cpp
 *
 *  Created on: Sep 18, 2015
 *      Author: MacBookEr
 */

#include <Algorithm.h>
#include <gtest/gtest.h>


TEST(EnsureTestsAreWorking, itShouldReturnTrue) {
	Algorithm alg = Algorithm();
	string result = alg.getTestStatus();
	string correct = "Tests are working";
	EXPECT_EQ(correct, result);
}

TEST(GetAllFactorsOfANumber, itShouldReturnFactorGroupsForAnInteger) {
	Algorithm alg = Algorithm();
	int integerToFactor = 18;

	vector <vector <int> > result = alg.getFactorsForInteger(integerToFactor);

	vector <vector <int> > correct;

	vector <int> firstFactors;
	firstFactors.push_back(1);
	firstFactors.push_back(18);

	vector <int> secondFactors;
	secondFactors.push_back(2);
	secondFactors.push_back(9);

	vector <int> thirdFactors;
	thirdFactors.push_back(3);
	thirdFactors.push_back(6);

	correct.push_back(firstFactors);
	correct.push_back(secondFactors);
	correct.push_back(thirdFactors);

	EXPECT_EQ(correct,result);
}

TEST(SquareIntegerandDivideInHalf, itShouldReturnEvenIntegersSquaredThenDividedByTwo) {
	Algorithm alg = Algorithm();
	int evenNumber = 6;
	int result = alg.squareIntegerAndDivideInHalf(evenNumber);
	int correct = 18;
	EXPECT_EQ(correct, result);
}

TEST(FindPythagoreanTriplets, itShouldReturnAllPossiblePythagoreanTripletsOfR) {
	Algorithm alg = Algorithm();
	int r = 6;
	int rSquaredAndDividedInHalf = alg.squareIntegerAndDivideInHalf(r);

	vector <vector <int> > factors = alg.getFactorsForInteger(rSquaredAndDividedInHalf);
	vector <vector <int> > result = alg.findPythagoreanTriplets(r, factors);

	vector <vector <int> > correct;

	vector <int> firstTriplet;
	firstTriplet.push_back(7);
	firstTriplet.push_back(24);
	firstTriplet.push_back(25);

	vector <int> secondTriplet;
	secondTriplet.push_back(8);
	secondTriplet.push_back(15);
	secondTriplet.push_back(17);

	vector <int> thirdTriplet;
	thirdTriplet.push_back(9);
	thirdTriplet.push_back(12);
	thirdTriplet.push_back(15);

	correct.push_back(firstTriplet);
	correct.push_back(secondTriplet);
	correct.push_back(thirdTriplet);

	EXPECT_EQ(correct,result);
}
