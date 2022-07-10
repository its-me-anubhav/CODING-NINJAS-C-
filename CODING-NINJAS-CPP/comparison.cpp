#include <iostream>
using namespace std;

int main() { 
int a,b;
cout << "Enter the numbers" << endl;
cin >> a >> b;

if(a == b) {
cout << "these numbers are equal" << endl;
} else if (a < b) {
	cout << "a is smaller" << endl;
} else {
	cout << " a is greater" << endl;
 }
}
