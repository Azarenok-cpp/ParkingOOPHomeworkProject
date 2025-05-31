#include "main.h"
#include "Parking.h"

int main() {
	Parking parking;
	Car* cars = new Car[10];

	for (int i = 0; i < 10; i++)
	{
		parking.add(cars[i]);
	}
	cout << parking.toString();

	int randomMemberIndex = parking.getSize() ? rand() % parking.getSize() : 0;
	cout <<"\nGet " << randomMemberIndex << " element of group: " << parking.get(randomMemberIndex).toString();

	parking.remove(randomMemberIndex);
	cout << randomMemberIndex << " element removed. now:\n";
	cout << parking.toString();

	Car car1{ "BMW", "X5", 3, 100'000, true, 365, true };	
	randomMemberIndex = parking.getSize() ? rand() % parking.getSize() : 0;

	parking.set(car1, randomMemberIndex);
	cout <<"\n\n" << randomMemberIndex << " element set to " << car1.toString() << "\n\n";

	cout << parking.toString();

	return 0;
}