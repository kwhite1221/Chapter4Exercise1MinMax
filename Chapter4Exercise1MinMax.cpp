/*
Project Name: Chapter 4 Exercise 1 Minimum/Maximum
File Name: Chapter4Exercise1MinimumMaximum.cpp
Programmer: Kristen White
Date: 10/2025
Requirements: Write a program that asks the user to enter two numbers,
determine which number is the smaller and which is larger
*/

#include <iostream> // we will always need this library for writing 
// to the console and reading from the keyboard
using namespace std; // we use this to simplify commands

// prototypes for the function
void getNumbers(double& num1, double& num2);
void findSmallerLarger(double num1, double num2, double& smaller, double& larger);
void displayResults(double smaller, double larger);

int main()
{
	double number1, number2;
	double smaller, larger;

	// get the input numbers
	getNumbers(number1, number2);

	// determine smaller and larger numbers
	findSmallerLarger(number1, number2, smaller, larger);

	// display the results
	displayResults(smaller, larger);

	return 0;
}

void getNumbers(double& num1, double& num2)
{
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
}

// find smaller and larger
void findSmallerLarger(double num1, double num2, double& smaller, double& larger)
{
	if (num1 < num2)
	{
		smaller = num1;
		larger = num2;
	}
	else if (num2 < num1)
	{
		smaller = num2;
		larger = num1;
	}
	else
	{
		smaller = larger = num1;
	}
}

// display the results
void displayResults(double smaller, double larger)
{
	if (smaller == larger)
		cout << "Both numbers are equal: " << smaller << endl;
	else
	{
		cout << "The smaller number is: " << smaller << endl;
		cout << "The larger number is: " << larger << endl;
	}
}

