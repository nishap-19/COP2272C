/*
Spring 2018, COP2272C.04 Computer Programming 1
Assignment 3
Purpose:	Write a program that defines and uses every member function in the
EvenNumber class for representing an even number.

The class contains:

A data field value of the int type that represents the integer value stored in the
object.
A default constructor (also known as no-arg constructor) that creates an EvenNumber
object for the default value 0.
A parameterized constructor (also known as explicit constructor) that constructs an
EvenNumber object with the specified value.
A function named getValue() to return an int value for this object.
A function named setValue() to change the current value for this object.
A function named getNext() to return the next value of even number after the current
value in this object.

Student Name: Nisha Patel
*/

#include<iostream>		//for standard i/o
using namespace std;	//reserve library objects for standard use

						//declare EvenNumber class type
class EvenNumber {

public:
	EvenNumber() { value = 2; }	//the default constructor
	EvenNumber(int initValue) { value = initValue; }	//the parameterized constructor
	int getValue() const { return value; } //the accessor to get the number's value
	void setValue(int newValue) { value = newValue; }	//the mutator to change the number's value
	int getNext() { return (value + 2); }	//returns next value of even number after the current value
private:
	int value;	//the even number value
};

int main() {

	EvenNumber	num1,	//created by calling the default constructor
		num2(4);	//created by calling the parameterized constructor

					//print the current value for each even number
	cout << "Even Number 1 is " << num1.getValue() << endl
		<< "Even Number 2 is " << num2.getValue() << endl << endl;

	//change the value of each number
	num1.setValue(6);
	num2.setValue(12);

	//print the new value for each number
	cout << "After changing the values:" << endl
		<< "Even Number 1 is " << num1.getValue() << endl
		<< "Even Number 2 is " << num2.getValue() << endl << endl;

	//print the next even value for each number
	cout << "The next even value after Even Number 1 is " << num1.getNext() << endl
		<< "The next even value after Even Number 2 is " << num2.getNext() << endl;


	return 0;
}