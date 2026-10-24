#include <iostream>

using namespace std;

const int PACKAGE_MIN = 0;
const int PACKAGE_MAX = 20;
const int SHIPPING_MIN = 10;
const int SHIPPING_MAX = 3000;

double packageWeight;
double shippingDistance;

int main() {

	cout << "Enter package weight(kg): " << endl;
	cin >> packageWeight;

	cout << "Enter shipping distance(mi): " << endl;
	cin >> shippingDistance;

	if (packageWeight > 0 and packageWeight <= 20) {
		if (shippingDistance >= 10 and shippingDistance <= 3000) {
			cout << endl << "Package weight: " << packageWeight << "kg" << endl;
			cout << "Distance: " << shippingDistance << "mi" << endl;
		}
		else if (shippingDistance < 10 or shippingDistance > 3000){
			cout << endl << "Invalid shipping distance." << endl;
		}
	}
	else if (packageWeight <= 0){
		cout << endl << "Invalid package weight." << endl;
	}
	else if (packageWeight > 20) {
		cout << endl << "Package exceeds weigth limit." << endl;
	}

	
	return 0;
}