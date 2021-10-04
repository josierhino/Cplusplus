// Car class question//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <time.h>
using namespace std;

class Car
{
private:    // the variables are always private //
	int year;
	string make;
	int speed;

public:
	Car(int y, string m)
	{
		year = y;
		make = m;
		speed = 0;
	}
	int getYear() { return year; }
	int getSpeed() { return speed; }
	string getMake() { return make; }

	void accelerate() {speed += 5;}
	void brake() { speed -= 5; }
};
int main()
{
	
	

    return 0;
}

