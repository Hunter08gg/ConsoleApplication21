#include <iostream>
#include <string>

class Car {
private:
	std::string brand;
	std::string model;
	int year;
	std::string color;
	int mileage;

public:
	Car(std::string _brand, std::string _model, int _year, std::string _color, int _mileage)
		: brand(_brand), model(_model), year(_year), color(_color), mileage(_mileage) {}

	void printInfo() {
		std::cout << "Brand: " << brand << std::endl;
		std::cout << "Model: " << model << std::endl;
		std::cout << "Year: " << year << std::endl;
		std::cout << "Color: " << color << std::endl;
		std::cout << "Mileage: " << mileage << " km" << std::endl;
	}
};

int main() {
	Car myCar("Toyota", "Camry", 2022, "Silver", 5000);
	myCar.printInfo();

	return 0;
}