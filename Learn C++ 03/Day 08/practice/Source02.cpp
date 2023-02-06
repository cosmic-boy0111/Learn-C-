//Write a program to store n elements in a dynamically allocated arrayand print the elements using the pointer.
//Sample Output :
//Input the number of elements to store in the array : 5
//Input 5 number of elements in the array :
//	element - 0 : 5
//	element - 1 : 7
//	element - 2 : 2
//	element - 3 : 9
//	element - 4 : 8
//	The elements you entered are :
//element - 0 : 5
//element - 1 : 7
//element - 2 : 2
//element - 3 : 9
//element - 4 : 8


#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "Enter the number of elements to store in the array : ";
	cin >> n;
	int* arr = new int[n];

	cout << "Enter elements in array : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "element - " << 0 << " : ";
		cin >> arr[i];
	}

	cout << "elements you entered : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "element - " << 0 << " : " << arr[i] << endl;
	}

	delete[] arr;

}
