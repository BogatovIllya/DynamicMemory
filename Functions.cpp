#include "Functions.h"

template<typename T> void FillRand(int n, T arr[]) {

	for (int i = 0; i < n; ++i) {
		arr[i] = rand() % 100 + 1;
	}
	print(arr, n);
}
template<typename T> void print(T arr[], int n) {
	cout << endl;
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}
template<typename T> void swap(T* a, T* b){
	T temp = *a;
	*a = *b;
	*b = temp;
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

template<typename T> T mm_mas(bool option, T arr[], int n) {
	T num = arr[0];
	if (option) {
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] > num)
			{
				num = arr[i];
			}
		}
	}
	else {
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] < num)
			{
				num = arr[i];
			}
		}
	}
	return num;
}
template<typename T> void Shift(T* a, int n, int shift_num, bool option){
	for (int i = 0; i < shift_num; ++i)	{
		if (option){
			for (int j = 1; j < n; ++j){
				swap(&a[j - 1], &a[j]);
			}
		}
		else{
			for (int j = n - 1; j > 0; --j){
				swap(&a[j - 1], &a[j]);
			}
		}
	}
}
