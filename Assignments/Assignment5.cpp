/*
Spring 2018, COP2272C.04 Computer Programming 1
Assignment 5
Purpose: Complete the partially given program in which the ExtTime class inherits the Time class
Student Name: Nisha Patel
*/

#include <iostream>		//for standard i/o
#include <iomanip>
#include <string>
using namespace std;	//reserve library objects for standard use

//declare the data type of time zone
enum TimeZone{EST, CST, MST, PST};

//super class
class Time {
	public:
		Time(); //default constructor which initializes a time to 00:00:00
		Time(int, int, int); //explicit constructor which initializes a time to given hr:min:sec
		void set(int, int, int); //change a time
		void write() const; //write a time in the hh:mm:ss format
	private:
		int hr; //hour
		int min; //minute
		int sec; //second
};

//default constructor
Time::Time() {	
	hr = 0;
	min = 0;
	sec = 0;
}

//explicit constructor
Time::Time(int hour, int minute, int second) {	
	hr = hour;
	min = minute;
	sec = second;
}

//changes the values for the time
void Time::set(int hour, int minute, int second) {
	hr = hour;
	min = minute;
	sec = second;
}

//prints the values for the time
void Time::write() const{
	cout <<
		setfill('0') << setw(2) << hr << ":" <<
		setfill('0') << setw(2) << min << ":" <<
		setfill('0') << setw(2) << sec;
}

//subclass
class ExtTime : public Time
{
public:
	ExtTime(); //default constructor which initializes an extended time to 00:00:00 EST
	ExtTime(int, int, int, TimeZone); //explicit constructor which initializes an extended time to given hr:min:sec zone
	void set(int, int, int, TimeZone); //change an extended time
	void write() const; //write an extended time
private:
	TimeZone zone; //time zone
};

//default constructor
ExtTime::ExtTime() {
	zone = EST;
	Time time();
}

//explicit constructor, creates Time and sets value for TimeZone
ExtTime::ExtTime(int hour, int minute, int second, TimeZone inZone)
:Time(hour, minute, second){
	zone = inZone;
}

//changes the values for Time and TimeZone
void ExtTime::set(int hour, int minute, int second, TimeZone inZone) {
	Time::set(hour, minute, second);
	zone = inZone;

}

//prints the values for the time and the time zone
void ExtTime::write() const {
	Time::write();

	string theZones[4] = { "EST", "CST", "MST", "PST" };

	cout << " " << theZones[zone];
}

int main()
{
	ExtTime time1, //call default constructor
		time2(10, 26, 38, CST); //call explicit constructor

	//write time1 and time2
	time1.write(); //write 00:00:00 EST
	cout << endl;
	time2.write(); //write 10:26:38 CST
	cout << endl;

	//change time1
	time1.set(6, 28, 8, PST);

	//white time1 again
	time1.write(); //write 06:28:08 PST
	cout << endl;

	return 0; //successfully done
}