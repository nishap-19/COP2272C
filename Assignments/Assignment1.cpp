/*
Spring 2018, COP2272C.04 Computer Programming 1
Assignment 1
Purpose: Input minutes and output years and days
Student Name: Nisha Patel
*/

#include <iostream>
using namespace std;

int main() {

	//create variables to hold number of minutes, years, and days
	int minutes, years, days;

	//prompt user to input a value for number of minutes
	cout << "Enter the number of minutes" << endl;
	cin >> minutes;

	//convert minutes to years using conversion		1 year = 525600 minutes
	years = minutes / 525600;
	//convert minutes to days using conversion		1 day = 1440 minutes
	days = minutes % 525600 / 1440;

	/*
	years = min / (365 * 24 * 60);
	remainedMin = min % (365 * 24 *60);
	day = remainedMin / (24 * 60);
	*/

	//output the approximate number of years and days
	cout << minutes << " minutes is approximately " << years << " years and " << days << " days." << endl;

	return 0;
}
