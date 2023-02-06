//Write a program to sort an array using Pointer.
//Sample Output :
//Input 5 number of elements in the array :
//	element - 1 : 25
//	element - 2 : 45
//	element - 3 : 89
//	element - 4 : 15
//	element - 5 : 82
//	The elements in the array after sorting :
//element - 1 : 15
//element - 2 : 25
//element - 3 : 45
//element - 4 : 82
//element - 5 : 89

#include <iostream>

using namespace std;



void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int a[], int len) {
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
			if (a[j] > a[j + 1]) {
				swap(&a[j],&a[j+1]);
			}
}

int main() {
	const int size = 100000;
	int n = 0;
	cout << "Enter a size of array : ";
	cin >> n;

	int arr[size] = {0};
	cout << "Enter elements of array : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "element - " << i + 1 << " : ";
		cin >> arr[i];
	}

	sort(arr, n);

	cout << "elements of array after sorting : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "element - " << i + 1 << " : " << arr[i] << endl;
	}


}