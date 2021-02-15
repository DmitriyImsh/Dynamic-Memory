#include <iostream>
using namespace std;
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void main()
{
	setlocale(LC_ALL, "");
		int n;
		cout << "¬ведите размер массива:  "; cin >> n;
		int* arr = new int[n];
		cout << (arr, n) << endl;
		FillRand(arr, n);
		Print(arr, n);

		int brr[5];
		cout << brr << endl;
		FillRand(brr, 5);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}