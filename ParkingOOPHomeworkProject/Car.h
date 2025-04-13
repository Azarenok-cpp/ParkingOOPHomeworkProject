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
	bool onParkingNow;

	//Default constructor
	Car() {
		brand = "Not added";
		model = "Not added";
		age = 1;
		price = 1000;
		unbroken = true;
		storageTime = 1;
		onParkingNow = true;
	}

	//Canonic constructor
	Car(string br, string m, int ag, int pr, bool unbr,
		int stTime, bool onParking) {
		brand = br;
		model = m;
		age = ag;
		price = pr;
		unbroken = unbr;
		storageTime = stTime;
		onParkingNow = onParking;
	}

	//Destructor
	~Car() {

	}

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