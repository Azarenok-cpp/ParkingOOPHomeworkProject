#include "main.h"
#include "Car.h"
#include "Security.h"

int main() {
	int amount;
	cout << "Amount of cars: ";
	cin >> amount;

	Car* listOfCars = nullptr;

	Initializer initializer;

	initializer.init(listOfCars, amount);

	for (int i = 0; i < amount; i++)
	{
		cout << listOfCars[i].getInfo() << " ";
	}

	return 0;
}