#pragma once
#include "Car.h"
class Parking
{
private:
	Car* list;
	int count;
public:
	Parking();
	Parking(Car* list, int count);
	~Parking();

	void add(Car car);
	void remove(Car car);
	void remove(int index);
	int getSize();
	Car get(int index);
	void set(Car car1, Car car2);
	void set(Car car, int index);

	string toString();
};

