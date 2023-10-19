// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial(float& A) {
	float factorial = 1.0; 
	cout << "Factorial:"<< endl ;
	cout << "Enter a number:"; 
	cin >> A;
	if (A <= 0) {
		cout << "Please enter a positive number" << endl;
		cin >> A;
	}
	else {
		cout << A << "!=";
		for (int i = 1; i <= A; ++i) {
			factorial *= i;
			cout << i;
			if (i < A)
				cout << " * ";
		}
		cout << " = " << factorial << endl;
	}
	// I recommend writing your factorial code here
}
void arithmetic(float& A, float& B, float& C) {
	int Sum; 
	cout << "Arithmetic Series: " << endl;
	cout << "Enter a number to start at:";
	cin >> A;
	cout << "Enter a number to add each time:";
	cin >> B; 
	cout << "Enter the number of elements in the series:";
	cin >> C;
	if (C <= 0) {
		cout << "Please enter a positive number" << endl;
		cin >> C;
	}
	else {
		Sum = 0;
		for (int i = 1; i <= C; ++i) {
			Sum = Sum + A;
			if (i != 1) {
				cout << " + ";
			}
			cout << A; 
			A = A + B;
		}
		cout <<" = "<< Sum << endl;
	}
	// I recommend writing your arithmetic series code here
}
void geometric(float& R, float& A, float& B) {
	int sum; 
	cout << " Geometric Series" << endl;
	cout << "Enter a number to start at: ";
	cin >> R;
	cout << "Enter a number to multiply by each time: ";
	cin >> A;
	cout << " Enter the number of elements in the series: ";
	cin >> B;
	if (B <= 0) {
		cout << "Please enter a positive number" << endl;
		cin >> B;
	}
	else {
		sum = 0;
		for (int i = 1; i <= B; ++i) {
			sum = sum + R;
			if (i != 1) {
				cout << " * ";
			}
			cout << R;
			R = R * A;
		}
		cout << " = " << sum << endl;
	}
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	float A;
	float B;
	float C;
	float R;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial(A);
		}
		else if (choice == 2) {
			arithmetic(A, B, C);
		}
		else if (choice == 3) {
			geometric(R, A, B);
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}