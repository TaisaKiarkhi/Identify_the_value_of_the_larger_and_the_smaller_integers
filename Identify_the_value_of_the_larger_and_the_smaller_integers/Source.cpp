#include <iostream>
#include <format>
using namespace std;

int main() {

	
	int first_int{};
	int second_int{};
	
	cout << "Hi! This program will identify the largest and the smallest value. Please, enter two positive integers." << endl;
	cout << "First integer: ";
 	cin >> first_int;
	cout << endl << "Second integer: ";
	cin >> second_int;
	cout << endl;

	cout <<format("The largest integer is {} and the smallest is {}",max({first_int, second_int}),min({first_int, second_int}));

	return 0;
}