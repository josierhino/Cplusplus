// ConsoleApplication28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
{
	class Doctor {
	public:
		void setName(string n){ 
			doctorsName = n;
		}
		void setLocation(string l) {
			location = l;
		}
		void setYearsofPractice(int y) {
			NumberOfPractice = y;
		}
	public:
		string doctorsName;
		string location;
		int NumberOfPractice;
 };
	class Surgeon :: public Doctor {
	public: 
		string getSurgicalSpecialty() {
			return string;
		}
	};
	int main(void) {
		Surgeon DrShawrtz;
		DrShawrtz.setLocation("Las Vegas");
		DrShawrtz.setName("Dr.Shawrtz");
		DrShawrtz.setYearsOfPractice(50);

		cout << "The surgeon specialty is " << DrShawrtz.getSurgicalSpecialty << endl;
	}

    return 0;
}

