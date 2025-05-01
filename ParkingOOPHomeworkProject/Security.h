#pragma once
#include "Car.h"
class Security {
public:
	void letCarOut(Car* car) {
		car->setOnParkingNow(false);
	}
	void letCarIn(Car* car) {
		car->setOnParkingNow(true);
	}
};