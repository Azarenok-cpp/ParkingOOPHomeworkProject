#pragma once
#include "main.h"

class Car {
private:
	string brand;
	string model;
	int age;
	int price;
	bool unbroken;
	int storageTime;
	bool onParkingNow;
public:
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

	void setBrand(string brand) {
		this->brand = brand;
	}
	string getBrand() { return brand; }

	void setModel(string model) {
		this->model = model;
	}
	string getModel() { return model; }

	void setAge(int age) {
		if (age > 0 && age < 100) {
			this->age = age;
		}
	}
	int getAge() { return age; }

	void setPrice(int price) {
		if (price > 0) {
			this->price = price;
		}
	}
	int getPrice() { return price; }

	void setUnbroken(bool unbroken) {
		this->unbroken = unbroken;
	}
	bool isUnbroken() { return unbroken; }

	void setStorageTime(int storageTime) {
		if (storageTime > 1 && storageTime < (365 * 5)) {
			this->storageTime = storageTime;
		}
	}
	int getStorageTime() { return storageTime; }

	void setOnParkingNow(bool onParkingNow) {
		this->onParkingNow = onParkingNow;
	}
	bool isOnParkingNow() { return onParkingNow; }



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