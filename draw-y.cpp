// draw-y.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int height, width, letterStick;
	int spaces{ 0 };
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter width: ";
	cin >> width;
	int separator{ height / 2 };
	int middle{ width };
	bool flag{ false };

	for (int j{ 0 }; j <= separator; j++) {
		for (int s{ 0 }; s <= spaces; s++) {
			cout << " ";
		}
		for (int i{ 0 }; i <= width; i++) {
			if (i == 0 || i == width) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		for (int s{ 0 }; s <= spaces; s++) {
			cout << " ";
		}
		width = width - 2;
		spaces = spaces + 1;
		cout << endl;

	}
	//draw the bottom half
	for (int i{ 0 }; i <= separator; i++) {
		for (int i{ 0 }; i <= middle; i++) {
			if (i > middle / 2 && !flag) {
				cout << "*";
				flag = true;
			}
			else {
				cout << " ";
			}
		}
		flag = false;
		cout << endl;
	}

}

