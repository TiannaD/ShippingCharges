#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//This program calculates shipping costs based on package weight and shipping distance

const int PACKAGE_MIN = 0;
const int PACKAGE_MAX = 20;
const int SHIPPING_MIN = 10;
const int SHIPPING_MAX = 3000;
const int PER_MILE = 500;

double rate;
double multiplier;
double totalCost;

double packageWeight;
double shippingDistance;

//cout << fixed << setprecision(2);
//ceil : converts floating point numbers to the next highest int

int main() {

	cout << "Enter package weight(kg): " << endl;
	cin >> packageWeight;

	cout << "Enter shipping distance(mi): " << endl;
	cin >> shippingDistance;

	if (packageWeight > PACKAGE_MIN and packageWeight <= PACKAGE_MAX) {
		if (shippingDistance >= SHIPPING_MIN and shippingDistance <= SHIPPING_MAX) {
			//2kg or less
			if (packageWeight <= 2) {
				rate = 1.1;
				multiplier = ceil(shippingDistance / PER_MILE);
				totalCost = rate * multiplier;
				cout << fixed << setprecision(2) << "Rate: " << rate << endl << "Multi: " << multiplier << endl << "Total: $" << totalCost;
			}
			//2-6kg
			else if (packageWeight > 2 and packageWeight <= 6) {
				rate = 2.2;
				multiplier = ceil(shippingDistance / PER_MILE);
				totalCost = rate * multiplier;
				cout << fixed << setprecision(2) << "Rate: " << rate << endl << "Multi: " << multiplier << endl << "Total: $" << totalCost;
			}
			//6-10kg
			else if (packageWeight > 6 and packageWeight <= 10) {
				rate = 3.7;
				multiplier = ceil(shippingDistance / PER_MILE);
				totalCost = rate * multiplier;
				cout << fixed << setprecision(2) << "Rate: " << rate << endl << "Multi: " << multiplier << endl << "Total: $" << totalCost;
			}
			//10-20kg
			else if (packageWeight > 10 and packageWeight <= 20) {
				rate = 4.8;
				multiplier = ceil(shippingDistance / PER_MILE);
				totalCost = rate * multiplier;
				cout << fixed << setprecision(2) << "Rate: " << rate << endl << "Multi: " << multiplier << endl << "Total: $" << totalCost;
			}
		}
		else if (shippingDistance < SHIPPING_MIN or shippingDistance > SHIPPING_MAX){
			cout << endl << "Invalid shipping distance." << endl;
		}
	}
	else if (packageWeight <= PACKAGE_MIN){
		cout << endl << "Invalid package weight." << endl;
	}
	else if (packageWeight > PACKAGE_MAX) {
		cout << endl << "Package exceeds weigth limit." << endl;
	}

	
	return 0;
}