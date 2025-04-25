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
	Car() : Car("Not added", "Not added", 1, 1000, true, 1, true) {
	}

	//Canonic constructor
	Car(string brand, string model, int age, int price, bool unbroken,
		int storageTime, bool onParkingNow) {
		this->brand = brand;
		this->model = model;
		this->age = age;
		this->price = price;
		this->unbroken = unbroken;
		this->storageTime = storageTime;
		this->onParkingNow = onParkingNow;
	}

	//Destructor
	~Car() {

	}

	string getInfo() {
		string msg = "Brand: " + brand + "; Model: " + model + "\nAge: "
			+ to_string(age) + "; Price: " + to_string(price) + "\nStatus: "
			+ (unbroken ? "unbroken" : "after an accident")
			+ "\nWill be stored for " + to_string(storageTime) + " days"
			+ "\nIs on the parking right now: " + (onParkingNow ? "yes" : "no")
			+ "\n\n";
		return msg;
	}


};