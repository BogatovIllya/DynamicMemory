#include "Functions.hpp"
void FillRand(const int n, int arr[]) {

	for (int i = 0; i < n; ++i) {
		arr[i] = rand() % 100 + 1;
	}
	Print(arr, n);
}
void Print(int arr[], const int n) {
	cout << endl;
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}
int* push_front(int arr[], int& n, int val) {
	int* buf = new int[n + 1]{};
	for (int i = 0; i < n; ++i) {
		buf[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[0] = val;
	n++;
	return arr;
}
int* insert(int arr[], int& n, int val, int valnum) {
	int* buf = new int[n + 1]{};
	for (int i = 0; i < valnum; ++i) buf[i] = arr[i];
	for (int i = valnum; i < n; ++i) buf[i + 1] = arr[i];
	delete[] arr;
	arr = buf;
	arr[valnum] = val;
	n++;
	return arr;
}
int* pop_front(int arr[], int& n) {
	int* buf = new int[n - 1]{};
	n--;
	for (int i = 0; i < n; ++i) {
		buf[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buf;

	return arr;
}
int* pop_back(int arr[], int& n) {
	int* buf = new int[n - 1]{};
	n--;
	for (int i = 0; i < n; ++i) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;

	return arr;
}
int* push_back(int arr[], int& n, int val) {
	int* buf = new int[n + 1]{};
	for (int i = 0; i < n; ++i) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[n] = val;
	n++;
	return arr;
}
int* erase(int arr[], int& n, int valnum) {
	int* buf = new int[n - 1]{};
	for (int i = 0; i < valnum; ++i) buf[i] = arr[i];
	for (int i = valnum; i < n; ++i) buf[i] = arr[i + 1];
	delete[] arr;
	arr = buf;
	n--;
	return arr;
}
void Shift(int arr[], const int n, int shift_num) {

	for (int i = 0; i < shift_num; ++i) {
		int buf = arr[0];
		for (int j = 0; j < n; ++j) {
			arr[j] = arr[j + 1];
		}
	}

}