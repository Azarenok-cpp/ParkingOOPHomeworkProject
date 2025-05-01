#include "Car.h"

class Initializer {
public:
	void init(Car*& list, int count) {
		if (list == nullptr && count > 0) {
			list = new Car[count];
		}

		string brands[] = { "BMW", "Mercedes-Benz", "Audi","KIA", "Porsche", 
			"Toyota", "Hyundai", "Volkswagen", "Ford", "Mazda", "Bentley", 
			"Renault", "Jaguar", "Rolls-Royce" };

		int minPrice = 1000;
		int maxPrice = 5'000'000;

		int minAge = 1;
		int maxAge = 20;

		int minStorageTime = 1;
		int maxStorageTime = 730;


		for (int i = 0; i < count; i++)
		{
			list[i].setBrand(brands[rand() % 14]);
			list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
			list[i].setPrice(rand() % (maxPrice - minPrice + 1) + minPrice);
			list[i].setStorageTime(rand() % (maxStorageTime - minStorageTime + 1) + minStorageTime);
		}
	}


};