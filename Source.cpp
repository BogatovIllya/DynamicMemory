#include <iostream>
using namespace std;

void FillRand(const int n, int arr[]);
void Print(int arr[], const int n);
//void Shift(int arr[], const int n, int shift_num);
int* push_front(int arr[], int& n, int val);
int* push_back(int arr[], int& n, int val);
int* pop_front(int arr[], int& n);
int* pop_back(int arr[], int& n);
int* erase(int arr[], int& n, int valnum);
int* insert(int arr[], int& n, int val, int valnum);

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
//void Shift(int arr[], const int n, int shift_num) {
//
//	for (int i = 0; i < shift_num; ++i) {
//		int buf = arr[0];
//		for (int j = 0; j < n; ++j) {
//			arr[j] = arr[j + 1];
//		}
//	}
//
//}

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