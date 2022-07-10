//  fahrenhiet value to celcious value.
#include <iostream>
using namespace std;
int main() {
	int f;
	cout << "Enter fah value"<< endl;
	cin >> f;
	float c= (5.0/9)*(f-32); // formula used to convert fahrenhiet value to celcious value.
	cout << c << endl;
}
