#include<iostream>

using namespace std;

void calculate(int i){
	cout << "Cube of " << i << " is " << (i*i*i) << endl;
}

void calculate(float i){
	cout << "Cube of " << i << " is " << (i*i*i) << endl;
}

int main() {
	
	int a;
	float b;

	cout << "Enter an integer value: ";
	cin >> a;
	calculate(a);

	cout << "Enter a float value: ";
	cin >> b;
	calculate(b);

	return 0;
}