#include "Functions.h"

template<typename T> void FillRand(const int n, T arr[]) {

	for (int i = 0; i < n; ++i) {
		arr[i] = rand() % 100 + 1;
	}
	Print(arr, n);
}
template<typename T> void Print(T arr[], const int n) {
	cout << endl;
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}
template<typename T> T* push_front(T arr[], int& n, T val) {
	T* buf = new T[n + 1]{};
	for (int i = 0; i < n; ++i) {
		buf[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[0] = val;
	n++;
	return arr;
}
template<typename T> T* insert(T arr[], int& n, T val, int valnum) {
	T* buf = new T[n + 1]{};
	for (int i = 0; i < valnum; ++i) buf[i] = arr[i];
	for (int i = valnum; i < n; ++i) buf[i + 1] = arr[i];
	delete[] arr;
	arr = buf;
	arr[valnum] = val;
	n++;
	return arr;
}
template<typename T> T* pop_front(T arr[], int& n) {
	T* buf = new T[n - 1]{};
	n--;
	for (int i = 0; i < n; ++i) {
		buf[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buf;

	return arr;
}
template<typename T> T* pop_back(T arr[], int& n) {
	T* buf = new T[n - 1]{};
	n--;
	for (int i = 0; i < n; ++i) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;

	return arr;
}
template<typename T> T* push_back(T arr[], int& n, T val) {
	T* buf = new T[n + 1]{};
	for (int i = 0; i < n; ++i) {
		buf[i] = arr[i];
	}
	delete[] arr;
	arr = buf;
	arr[n] = val;
	n++;
	return arr;
}
template<typename T> T* erase(T arr[], int& n, int valnum) {
	T* buf = new T[n - 1]{};
	for (int i = 0; i < valnum; ++i) buf[i] = arr[i];
	for (int i = valnum; i < n; ++i) buf[i] = arr[i + 1];
	delete[] arr;
	arr = buf;
	n--;
	return arr;
}

//template<typename T> void Shift(T arr[], const int n, int shift_num) {
//
//	for (int i = 0; i < shift_num; ++i) {
//		T buf = arr[0];
//		for (int j = 0; j < n; ++j) {
//			arr[j] = arr[j + 1];
//		}
//	}
//
//}