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

	void setBrand(string brand);
	string getBrand();

	void setModel(string model);
	string getModel();

	void setAge(int age);
	int getAge();

	void setPrice(int price);
	int getPrice();

	void setUnbroken(bool unbroken);
	bool isUnbroken();

	void setStorageTime(int storageTime);
	int getStorageTime();

	void setOnParkingNow(bool onParkingNow);
	bool isOnParkingNow();



	string toString();


};