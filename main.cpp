#include "Functions.hpp"

void main() {

	setlocale(LC_ALL, "");
	int nn = 5;
	int& n = nn;
	int* arr = new int[n] {};
	FillRand(n, arr);
	int val, valnum;

	cout << endl << "Value to insert:	"; cin >> val;
	cout << endl << "Place:	"; cin >> valnum;
	arr = insert(arr, n, val, valnum);
	Print(arr, n);

	cout << endl << "Place to clear:	"; cin >> valnum;
	arr = erase(arr, n, valnum);
	Print(arr, n);

	cout << endl << "Value for push_back:	"; cin >> val;
	arr = push_back(arr, n, val);
	Print(arr, n);

	cout << endl << "After pop_back" << endl;
	arr = pop_back(arr, n);
	Print(arr, n);

	cout << endl << "Value for push_front:	"; cin >> val;
	arr = push_front(arr, n, val);
	Print(arr, n);

	cout << endl << "After pop_front" << endl;
	arr = pop_front(arr, n);
	Print(arr, n);

}