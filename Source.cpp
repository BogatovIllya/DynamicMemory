#include "Functions.h"
#include "Functions.cpp"

void main() {

	setlocale(LC_ALL, "");
	int nn = 5;
	int& n = nn;
	int* arr = new int[n] {};
	FillRand(n, arr);
	
	cout << minmax_mas(0, arr, n);
}
