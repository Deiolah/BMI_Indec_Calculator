#include <iostream>
//ADEOLA ABE
//BMI INDEX CALCULATOR
//This project is going to take user input for height weight and calculates the BMI. 
//Then display a message indicating whether the person is underweight, normal weight, overweight, or obese.

int main() {
	//BMI = Weight (kg) / Height (m^2)
	//Underweight is if BMI is < 18.5
	//Healthyweight is if BMI is 18.5 - 24.9
	//Over weight is if BMI is 25.0 - 29.9

	std::cout << "Enter your weight (kg): ";
	auto weight = 0.0;
	std::cin >> weight;

	std::cout << "Enter your height (m): ";
	auto height = 0.0;
	std::cin >> height; 

	auto BMI = 0.0;
	

	BMI = weight / (height * height );

	if (BMI < 18.5) {
		std::cout << "BMI: "<< BMI << std::endl;
		std::cout << "The BMI entered indicates you are within the underweight range. " << std::endl;

	}
	if (BMI >= 18.5 && BMI <= 24.9) {
		std::cout << "BMI: " << BMI << std::endl;
		std::cout << "The BMI entered indicates you are within normal range. " << std::endl;

	}
	if (BMI > 24.9 && BMI < 29.9) {
		std::cout << "BMI: " << BMI << std::endl;
		std::cout << "The BMI entered indicates you are within the overweight range. " << std::endl;

	}



}