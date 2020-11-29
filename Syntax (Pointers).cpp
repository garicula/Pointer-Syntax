// Garrick Morley
// CPSC 200 Project 5 A
// This program practices pointers

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
#include <cassert>
using namespace std;

main()
{
	//declare variables
	typedef int* intptr;

	int i, s;
	intptr pi, ps;

	//set up pointers
	pi = &i;
	ps = &s;

	cout << "Enter an integer (I'll add 1 and then square it): ";
	cin >> i;

	//add code to skeleton program
	(*pi)++;
	*ps = *pi * *pi;

	cout << i << " squared is " << s << endl;
}










