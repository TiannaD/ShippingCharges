#include <iostream>

using namespace std;

int packageWeight;
int shippingDistance;

int main() {

	cout << "Enter package weight(kg): " << endl;
	cin >> packageWeight;

	cout << "Enter shipping distance(mi): " << endl;
	cin >> shippingDistance;

	if (packageWeight > 0 and packageWeight <= 20) {
		cout << endl << "Package weight: " << packageWeight << "kg" << endl;
		cout << "Distance: " << shippingDistance << "mi" << endl;
	}
	else if (packageWeight <= 0){
		cout << endl << "Invalid package weight." << endl;
	}
	else if (packageWeight > 20) {
		cout << endl << "Package exceeds weigth limit." << endl;
	}

	
	return 0;
}