#include <iostream>

using namespace std;

int packageWeight;
int shippingDistance;

int main() {

	cout << "Enter package weight(kg): " << endl;

	cin >> packageWeight;


	cout << "Enter shipping distance(mi): " << endl;

	cin >> shippingDistance;


	cout << endl << "Package weight: " << packageWeight << "kg" << endl << "Distance: " << shippingDistance << "mi" << endl;

	return 0;
}