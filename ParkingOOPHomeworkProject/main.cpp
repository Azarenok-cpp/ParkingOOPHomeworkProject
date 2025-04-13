#include "main.h"
#include "Car.h"
#include "Security.h"

int main() {
	string brand, model;
	int age, price, storageTime;
	bool unbroken, onParkingNow;


	cout << "Input brand of your car: ";
	getline(cin, brand);

	cout << "Input model of your car: ";
	getline(cin, model);

	cout << "Input age of your car: ";
	cin >> age;

	cout << "Input price of your car: ";
	cin >> price;

	char userInput;
	cout << "Is your car unbroken(y/n): ";
	cin >> userInput;
	unbroken = tolower(userInput) == 'y';

	cout << "Input storage time of your car (will be kept for ... days): ";
	cin >> storageTime;


	cout << "Is your car on perking right now(y/n): ";
	cin >> userInput;
	onParkingNow = tolower(userInput) == 'y';

	cout << endl;

	Car car1(brand, model, age, price, unbroken, storageTime, onParkingNow);

	cout << car1.getInfo();


	Security security;

	//car gone away
	security.letCarOut(&car1);

	cout << car1.getInfo();

	//car came back
	security.letCarIn(&car1);

	cout << car1.getInfo();

	return 0;
}