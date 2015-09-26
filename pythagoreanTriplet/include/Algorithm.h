/*
 * Algorithm.h
 *
 *  Created on: Sep 18, 2015
 *      Author: MacBookEr
 */

#ifndef INCLUDE_ALGORITHM_H_
#define INCLUDE_ALGORITHM_H_

#include <iostream>
#include <vector>



using namespace std;

class Algorithm {


public:
	Algorithm();
	virtual ~Algorithm();

	string getTestStatus() const;

	vector <vector <int> > getFactorsForInteger(int integerToFactor);

	int squareIntegerAndDivideInHalf(int intger);

	vector <vector <int> > findPythagoreanTriplets(int r, vector <vector <int> > factorialsOfRSquaredAndDividedByTwo);

	vector <int> findVectorGroupThatMatchesSum(vector <vector <int> > vectorToCheck, int sumToMatch);

	int findProductOfVectorOfIntegers(vector <int> vectorGroup);

	int findProductOfPythagoreanTripletWhoseSumMatches(int sumToMatch);

private:
	string testStatus;

};


#endif /* INCLUDE_ALGORITHM_H_ */
