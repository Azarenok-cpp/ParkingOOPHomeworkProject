#pragma once
#include "main.h"

class Car {
public:
	string brand;
	string model;
	int age;
	int price;
	bool unbroken;
	int storageTime;
	bool onParkingNow = true;

	string getInfo() {
		string msg = "Brand: " + brand + "\nModel: " + model + "\nAge: "
			+ to_string(age) + "\nPrice: " + to_string(price) + "\nStatus: " 
			+ (unbroken ? "unbroken" : "after an accident") 
			+ "\nWill be stored for " + to_string(storageTime) + " days" 
			+ "\nIs on the parking right now: " + (onParkingNow ? "yes" : "no")
			+ "\n\n";

		return msg;
	}

};