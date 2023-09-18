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
void factorial() {
	// I recommend writing your factorial code here
	int i, fact = 1, N;
	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> N;
	if (N < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> N;
	}
	else {
		cout << N << "! = ";
		for (i = 1; i <= N; i++) {

			if (i != N) {

				std::cout << i << " * ";

			}

			fact = fact * i;

		}

	
		cout << N <<"";
		cout << " = " << fact << endl;


	}
	

		
	
}
float sumOfAP(float N2, float A, int i2) {

	float Ari = 0;

	for (int R = 0; R < i2; R++) {

		
		if (R <= i2) {
			std::cout << N2;
			
		}

		if (R < i2 -1) {
			std::cout << " + ";
		}

		
		Ari = Ari + N2;
		N2 = N2 + A;
			

	}
	return Ari;
}

void arithmetic() {
	// I recommend writing your arithmetic series code here
	int R, i2, N2, A;
	cout << "Arithmetic Series" << endl;
	cout << "Enter a number to start at: ";
	cin >> N2;
	cout << "Enter a number to add each time: ";
	cin >> A;
	cout << "Enter the number of elements in the series: ";
	cin >> i2;


	cout << " = " << sumOfAP(N2, A, i2) << endl;
	
}

float sumOfGP(float a, float e, int r){

	float sum = 0;
	for (int i = 0; i < r; i++)	{

		if (i <= r) {
			std::cout << a;

		}

		if (i < r - 1) {
			std::cout << " * ";
		}

		sum = sum + a;
		a = a * e;

	}
	return sum;

}
void geometric() {
	// I recommend writing your geometric series code here
	int R, e, r, a;
	cout << "Arithmetic Series" << endl;
	cout << "Enter a number to start at: ";
	cin >> r;
	cout << "Enter a number to multiply each time: ";
	cin >> a;
	cout << "Enter the number of elements in the series: ";
	cin >> e;

	cout << " = " << sumOfGP(r, a, e) << endl;

}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {

			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}