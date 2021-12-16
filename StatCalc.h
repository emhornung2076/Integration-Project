/** @file StatCalc.H

 *  @brief Header for the program

 *

 *  The header provides all of the class objects along with their members and functionality.
 *

 *  @author Erik Hornung

 *  @bug No known bugs.

 */

#pragma once
#include <math.h>
#include <iostream>

// LO1a
class Data {
// LO6
private: 
	float sum;
	friend class Dataset;
public: 
	virtual float getMean() = 0;  // Used to help figure this part out: https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm
	float data[5];
};

// LO2 and LO6
class Dataset : public Data {  // LO5
public:

	Dataset();
	Dataset(float dataArr[]);

	// LO3
	void dataPoint(int dataPoint1);
	void dataPoint(int dataPoint1, int dataPoint2);
	void dataPoint(int dataPoint1, int dataPoint2, int dataPoint3);

	float getMean() {
		return sum / 5;
	}

	double getVariance(float data[5]) {
		double mean = sum / 5;
		double tempArr[5];
		for(int i = 0; i < 5; i++) {
			tempArr[i] = pow((data[i] - mean),2);
		}
		double variance = (tempArr[0] + tempArr[1] + tempArr[2] + tempArr[3] + tempArr[4]) / 5;
		return variance;
	}

	float getSum(float data[5]) {
		sum = data[0] + data[1] + data[2] + data[3] + data[4];
		return sum;
	}

	// attempted LO1b
	/*friend ostream& operator<<(ostream& os, const Dataset& ds) {
		os << "The current dataset is : " << ds.data[0] << " " << ds.data[1] << " " << ds.data[2] << " " << ds.data[3] << " " << ds.data[4] << " " << endl;
		return os;
	}*/
};


// LO1c
Dataset::Dataset() {

}

Dataset::Dataset(float dataArr[]) {

}

