#pragma once
#include <iostream>
using namespace std;
template<typename T> void Shift(T* a, int n, int shift_num, bool option);
template<typename T> void FillRand(int n, T arr[]);
template<typename T> void print(T arr[], int n);
template<typename T> T* push_front(T arr[], int& n, T val);
template<typename T> T* push_back(T arr[], int& n, T val);
template<typename T> T* pop_front(T arr[], int& n);
template<typename T> T* pop_back(T arr[], int& n);
template<typename T> T* erase(T arr[], int& n, int valnum);
template<typename T> T* insert(T arr[], int& n, T val, int valnum);
template<typename T> T mm_mas(bool option, T arr[], int n);
void dec_to_bin();