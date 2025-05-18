#include "Car.h"

//Canonic constructor


void Car::setBrand(string brand) {
	this->brand = brand;
}
string Car::getBrand() { return brand; }

void Car::setModel(string model) {
	this->model = model;
}
string Car::getModel() { return model; }

void Car::setAge(int age) {
	if (age > 0 && age < 100) {
		this->age = age;
	}
}
int Car::getAge() { return age; }

void Car::setPrice(int price) {
	if (price > 0) {
		this->price = price;
	}
}
int Car::getPrice() { return price; }

void Car::setUnbroken(bool unbroken) {
	this->unbroken = unbroken;
}
bool Car::isUnbroken() { return unbroken; }

void Car::setStorageTime(int storageTime) {
	if (storageTime > 1 && storageTime < (365 * 5)) {
		this->storageTime = storageTime;
	}
}
int Car::getStorageTime() { return storageTime; }

void Car::setOnParkingNow(bool onParkingNow) {
	this->onParkingNow = onParkingNow;
}
bool Car::isOnParkingNow() { return onParkingNow; }



string Car::getInfo() {
	string msg = "Brand: " + brand + "; Model: " + model + "\nAge: "
		+ to_string(age) + "; Price: " + to_string(price) + "\nStatus: "
		+ (unbroken ? "unbroken" : "after an accident")
		+ "\nWill be stored for " + to_string(storageTime) + " days"
		+ "\nIs on the parking right now: " + (onParkingNow ? "yes" : "no")
		+ "\n\n";
	return msg;
}

