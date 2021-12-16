/** @file StatCalc.cpp

 *  @brief Main function for the program

 *

 *  The program starts by asking the user to input 5 data points which are stored into a Dataset object. The user is then able to calculate the mean, standard deviation, and variation of the object.

 *

 *  @author Erik Hornung

 *  @bug No known bugs.

 */

// LO4
// A procedural approach to programming follows a structure of using functions to navigate through the program while an object-oriented approach uses objects to interact with the program. 
// Objects allow the programmer to hide data, add/reuse data and functions, and overload operators or functions.

/* LO5
Subtyping and inheritance are closely related. Both offer very similar functionality. A subtype can use function from the supertype, while inheritance allows a class to use almost everything
or everything from a superclass. */

#include <iostream>
#include "StatCalc.h"
#include <math.h>
using namespace std;

/** @brief Menu for program

 *

 *  Provides the User with a menu to choose what function they want to do.

 *

 *  @param none

 *  @return void

 */
void menu();

/** @brief Provides the mean

 *

 *  Takes the sum of all values in the data array and divides them by 5

 *

 *  @param d1: The dataset object

 *  @return void

 */
void mean(Dataset d1);

/** @brief Provides the standard deviation

 *

 *  Takes the variance and square roots it to reveive the variance

 *

 *  @param d1: The dataset object
 *  @param data: The data array

 *  @return void

 */
void stdDev(Dataset d1, float data[5]);

/** @brief Provides the variance

 *

 *  Calculates the variance given the numbers in the array

 *

 *  @param d1: The dataset object
 *  @param data: The data array

 *  @return void

 */
void variance(Dataset d1, float data[5]);
void polymorphism();

int main() {
	float data[5];
	int menuChoice;

	cout << "Enter 5 total data points." << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter data point " << i+1 << endl;
		cin >> data[i];
	}
	
	Dataset d1(data);
	d1.getSum(data);

	cout << endl;

	menu();

	do {
		cout << endl;
		cout << "Select an option: ";
		cin >> menuChoice;

		switch (menuChoice)
		{
		case 1:
			mean(d1);
			cout << endl;
			break;
		case 2:
			stdDev(d1, data);
			cout << endl;
			break;
		case 3:
			variance(d1, data);
			cout << endl;
		case 4:
			polymorphism();
			cout << endl;
		default:
			break;
		}
	} while (menuChoice != 5);
}

void menu() {
	cout << "1) Calculate mean." << endl;
	cout << "2) Calculate standard deviation." << endl;
	cout << "3) Calculate variance." << endl;
	cout << "4) Polymorphism." << endl;
	cout << "5) Quit." << endl;
}

void mean(Dataset d1) {
	cout << "The mean of the data is: " << d1.getMean() << endl;
}

void stdDev(Dataset d1, float data[5]) {
	cout << "The standard deviation of the data is: " << sqrt(d1.getVariance(data)) << endl;
}

void variance(Dataset d1, float data[5]) {
	cout << "The variance of the data is: " << d1.getVariance(data) << endl;
}

void polymorphism() {
	Dataset dataPoint(int a);
	Dataset dataPoint(int a, int b);
	Dataset dataPoint(int a, int b, int c);
}

