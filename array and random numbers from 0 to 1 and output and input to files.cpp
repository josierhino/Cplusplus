// ConsoleApplication19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	srand(time(NULL));

	const int SIZE = 10; // array has to be a constant size //
	double a[SIZE];

	// fill an array with random numbers between 0 and 1 
	for (int i = 0; i < SIZE; i++) { // use a for loop to give 10 random numbers // 
		a[i] = (rand() % 1000) / 1000.0;      // gives u random number between 0 and 999 that is a double //
	}

	ofstream output; // output the array to file // 
	output.open("WhateverTheFileNameIs.txt"); // open the file //

	for (int i = 0; i < SIZE; i++)
	{
		output << a[i]; // when outputting to file use output NOT cout // 
	}
	output.close(); // close the file // 

	// read the array from the file and output it to the console 
	ifstream input; // input to file // 
	input.open("WhateverTheFileNameIs.txt"); // open file//

	for (int i = 0; i < SIZE; i++)
	{
		double temp;
		input >> temp;
		cout << temp << endl;
	}
	input.close(); // close file // 

    return 0;
}

