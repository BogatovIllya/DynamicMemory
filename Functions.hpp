#pragma once
#include <iostream>
using namespace std;

void FillRand(const int n, int arr[]);
void Print(int arr[], const int n);
int* push_front(int arr[], int& n, int val);
int* push_back(int arr[], int& n, int val);
int* pop_front(int arr[], int& n);
int* pop_back(int arr[], int& n);
int* erase(int arr[], int& n, int valnum);
int* insert(int arr[], int& n, int val, int valnum);
void Shift(int arr[], const int n, int shift_num);