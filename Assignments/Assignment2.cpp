/*
Spring 2018, COP2272C.04 Computer Programming 1
Assignment 2
Purpose:	Write a program that calls a function to display a n-by-n pattern as
follows in which n is an integer from 1 to 9:

1
2 1
3 2 1
...
n n-1 ....3 2 1

Student Name: Nisha Patel
*/

#include<iostream>		//for standard i/o
using namespace std;	//reserve library objects for standard use

						//function that is passed an integer value to create the pattern
void pattern(int n) {

	//start from the first row and end at the nth row
	for (int row = 0; row <= n; row++) {

		cout << "          ";	//print at current position

								//within each row, insert formatted spacing
		for (int space = n - row; space > 0; space--) {

			cout << "  ";	//print formatting spaces
		}

		//within each row, place values after formatted spacing
		for (int col = row; col > 0; col--) {

			cout << col << " ";	//print at current position
		}

		cout << endl;	//line feed to end row
	}

	cout << "..." << endl;	//print divider after pattern
	cout << "n n-1 ....";	//print pattern type

							//start from n and prints out all values from pattern
	for (int x = n; x > 0; x--) {

		cout << x << " ";	//print at current position
	}

	cout << endl;	//line feed to end line
}

int main() {

	int x;	//pattern size to be read in by user input
	bool check = true;

	while (check) {
		//prompt user to enter in a number from 1 to 9
		cout << "Please enter a number from 1 to 9:" << endl;
		cin >> x;

		if (x > 0 && x < 10) {	//verfies the user entered in a valid number
			check = false;		//condition to terminate while loop
			pattern(x);			//passes user input to pattern function
		}
		else
			cout << "Invalid entry" << endl;	//tells user their input is invalid
	}

	return 0;
}