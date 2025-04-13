#pragma once
#include "Car.h"
class Security {
public:
	void letCarOut(Car* car) {
		car->onParkingNow = false;
	}
	void letCarIn(Car* car) {
		car->onParkingNow = true;
	}
	
};