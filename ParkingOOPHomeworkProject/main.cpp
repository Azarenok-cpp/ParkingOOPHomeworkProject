#include "main.h"
#include "Car.h"
#include "Security.h"

int main() {
	Car* car1 = new Car;
	
	cout << "Input brand of your car: ";
	getline(cin, car1->brand);

	cout << "Input model of your car: ";
	getline(cin, car1->model);

	cout << "Input age of your car: ";
	cin >> car1->age;

	cout << "Input price of your car: ";
	cin >> car1->price;

	string unbrokenAnswer;
	cout << "Is your car unbroken(y/n): ";
	cin >> unbrokenAnswer;
	car1->unbroken = unbrokenAnswer == "y";

	cout << "Input storage time of your car (will be kept for ... days): ";
	cin >> car1->storageTime;
	
	cout << endl;
	cout << car1->getInfo();

	Security security;
	//car gone away
	security.letCarOut(car1);

	cout << car1->getInfo();
	//car came back
	security.letCarIn(car1);
	
	cout << car1->getInfo();

	delete car1;
	return 0;
}