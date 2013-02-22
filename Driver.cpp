// Name: Zachary, Giancarlo
// Course: CSC 260, Section 01
// Semester: Spring 2013
// Instructor: Dr. Pulimood
// Assignment Perfect Number Checker
// Description: Checks numbers to see if they are perfect
// Filename: Driver.cpp
// Last modified on: 2/12/13

#include <iostream>
#include "fus.h"

using namespace std;

int main()
{
	int start = 0, end = 0;
	cout<< "Enter your start value: ";
	cin>>start;
	cout<< "Enter your end value: ";
	cin>>end;
	int arr[20];
	for(int i = 0; i < 20; i++)
		arr[i] = 0;
	int elems = populateArray(arr, start, end);
	printArray(arr, elems);
}
