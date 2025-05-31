#include "Parking.h"

Parking::Parking() {
	count = 0;
	list = nullptr;
}

Parking::Parking(Car* list, int count) {
	if (list != nullptr && count > 0) {
		list = new Car[count];

		this->count = count;

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
}


Parking::~Parking() {
	if (list != nullptr) {
		delete[] list;
	}
}

void Parking::add(Car car) {
	Car* copy = new Car[count + 1];
	for (int i = 0; i < count; i++)
	{
		copy[i] = list[i];
	}

	copy[count] = car;
	count++;

	list = copy;
}
void Parking::remove(Car car) {
		Car* copy = new Car[count - 1];
		for (int i = 0, j = 0; i < count; i++)
		{
			if (list[i].toString() != car.toString()) {
				copy[j] = list[i];
				j++;
			}
		}
		count--;
		list = copy;
	
}
void Parking::remove(int index) {
	if (index >= 0 && index < count) {
		Car* copy = new Car[count - 1];
		for (int i = 0, j = 0; i < count; i++)
		{
			if (i != index) {
				copy[j] = list[i];
				j++;
			}
		}
		count--;
		list = copy;
	}

}
int Parking::getSize() {
	return count;
}
Car Parking::get(int index) {
	if (index >= 0 && index < count) {
		return list[index];
	}
	return Car("", "", 0, 0, false, 0, false);
}

void Parking::set(Car car1, Car car2) { //sets car2 on car1 place in the list
	for (int i = 0; i < count; i++)
	{
		if (list[i].toString() == car1.toString()) {
			list[i] = car2;
		}
	}
}
void Parking::set(Car car, int index) {
	if (index >= 0 && index < count) {
		list[index] = car;
	}
}

string Parking::toString() {
	if (count < 1 || list == nullptr) {
		return "Error";
	}
	string s = "Parking:\n";
	for (int i = 0; i < count; i++)
	{
		s += list[i].toString();
	}
	return s;
}