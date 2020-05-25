#include "Functions.h"
#include "Functions.cpp"


void main() {

	setlocale(LC_ALL, "");
	int nn = 5;
	int& n = nn;
	int* arr = new int[n] {};
	FillRand(n, arr);
	
	/*cout << mm_mas(0, arr, n);*/
	//Shift(arr, n, 1, 1);
	//dec_to_bin();
	//print(arr, n);
	delete[] arr;
}




void dec_to_bin() {
	typedef int NumberType;
	NumberType decimal;
	const int capacity = sizeof(NumberType) * 8;
	cout << capacity << endl;
	int bin[capacity] = {};
	cin >> decimal;
	int i = 0;
	while (decimal > 0) {
		bin[i] = decimal % 2;
		decimal /= 2;
		++i;
	}
	for (int i = capacity - 1; i >= 0; --i) {
		cout << bin[i];
		if (i % 4 == 0)cout << " ";
		if (i % 8 == 0)cout << "  ";
	}
	cout << endl;
}