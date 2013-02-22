// Name: Zachary, Giancarlo
// Course: CSC 260, Section 01
// Semester: Spring 2013
// Instructor: Dr. Pulimood
// Assignment Perfect Number Checker
// Description: Checks numbers to see if they are perfect
// Filename: fus.cpp
// Last modified on: 2/12/13

#include <iostream>
#include "fus.h"

using namespace std;

bool isPerfect(int num)
{
	int sum = 0;

	for(int i = num-1; i > 0; i--)
		if(num % i == 0)
			sum += i;

	if(sum == num)
		return true;
	return false;
}

int populateArray(int arr[20], int start, int end)
{
	int numElements = 0;
	
	for(int i = start; i < end; i++)
	{
		if(isPerfect(i))
		{
			for(int j = 0; j < 20; j++)
			{
				if(arr[j] == 0)
				{
					arr[j] = i;
					break;
				}
			}
			
			numElements++;
		}
	}
	
	return numElements;
}

void printArray(int arr[], int numElements)
{
	for(int i = 0; i < numElements; i=i+2)
	{
		if(arr[i+1] != 0)
			cout<< arr[i] << "\t" << arr[i+1] << endl;
		else if(arr[i] != 0)
			cout<< arr[i] << endl;
	}
}