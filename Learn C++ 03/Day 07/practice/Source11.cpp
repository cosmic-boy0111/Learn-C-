#include <iostream>

using namespace std;

void swap(int* arr[], int i, int j) {
	int* temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void bubbleSort(int* arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (*arr[j] > *arr[j + 1]) {
				swap(arr, j, j + 1);
			}
}

int main() {

	const int size = 10000;
	int n = 0;
	cout << "Enter a size : ";
	cin >> n;

	int arr[size];
	cout << "Enter elememts of array : " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int* arr_ptr[size];
	for (int i = 0; i < n; i++) {
		arr_ptr[i] = &arr[i];
	}

	bubbleSort(arr_ptr, n);
	cout << "Sorted values are : ";
	for (int i = 0; i < n; i++) {
		cout << *arr_ptr[i] << " ";
	}


}