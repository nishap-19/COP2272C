/*
Spring 2018, COP2272C.04 Computer Programming 1
Assignment 4
Purpose: Write a program that performs the following tasks:
		 1. creating an empty integer vector
		 2. filling in at least 10 randomly generated integers between 1 and 100
		 3. displaying the elements within the vector
		 4. counting how many elements within the vector can be evenly divided by 3
Student Name: Nisha Patel
*/

#include <iostream>		//for standard i/o
#include <vector>		//for vector
#include <ctime>		//for time from clock
using namespace std;	//reserve library objects for standard use

int main() {

	//this statement randommizes the start value for the random number generator each time 
	//the program is run
	srand(time(NULL));

	//create int array with room for 10 values
	vector<int> intArray;

	//generate 10 ranom numbers with a value between 1 and 100
	for (int x = 0; x < 10; x++) {

		//randomly generate a number from 1 to l00 and add it to the array 
		intArray.push_back((rand() % 100) + 1);
	}

	cout << "The integer vector contains the following values:" << endl;

	//prints the 10 values in the int array
	for (int x = 0; x < intArray.size(); x++) {
		
		//print the integer at each index value 
		cout << intArray[x];

		//add "," between two integers 
		if (x != (intArray.size() - 1))
			cout << ", ";
	}
	cout << endl;

	int div3 = 0;	//create value to total number of integers divisible by 3 

	//counts how many values are divisible by 3
	for (int x = 0; x < intArray.size(); x++) {

		//check to see if the integer at each index value is divisible by 3 
		if (intArray[x] % 3 == 0)
			div3++;	//if the integer is divisible by 3, increment div3 by 1 
	}

	// print the number of integers divisible by 3
	cout << "The number of values divisible by 3 is " << div3 << endl;

	return 0;
}
