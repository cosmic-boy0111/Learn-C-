//Write a stats function which computesand returns several statistical results through “out parameters” of a given range of values.
//Sample Input :
//Input 5 number of elements in the array :
//	element - 0 : 5
//	element - 1 : 7
//	element - 2 : 2
//	element - 3 : 9
//	element - 4 : 8
//	Sample Output :
//Min: 2
//Max : 9
//Sum : 31
//Avg : 6.2
//Count : 5


#include <iostream>
#include <climits>
using namespace std;



void Min(int arr[], int len, double* result) {
	int ans = INT_MAX;
	for (int i = 0; i < len; i++) {
		if (arr[i] < ans) ans = arr[i];
	}
	*result = ans;
}

void Max(int arr[], int len, double* result) {
	int ans = INT_MIN;
	for (int i = 0; i < len; i++) {
		if (arr[i] > ans) ans = arr[i];
	}
	*result = ans;
}

void Sum(int arr[], int len, double* result) {
	int ans = 0;
	for (int i = 0; i < len; i++) ans += arr[i];
	*result = ans;
}


void Avg(int arr[], int len, double* result) {
	int ans = 0;
	for (int i = 0; i < len; i++) ans += arr[i];
	*result = ans / static_cast<float>(len);
}


void Count(int arr[], int len, double* result) {
	*result = len;
}

void stats(int arr[], int len, double* result, void (*function)(int[], int, double*)) {
	function(arr, len, result);
}

int main(int argc, char* argv[]){


	const size_t size = 100000;
	int n = 0;

	int arr[size];

	for (int i = 1; i < argc; i++) {
		arr[i-1] = atoi(argv[i]);
	}

	n = argc - 1;

	double result = 0.0;
	double* ptr = &result;
	stats(arr, n, ptr, Min);
	cout << "Min : " << result << endl;
	stats(arr, n, ptr, Max);
	cout << "Max : " << result << endl;
	stats(arr, n, ptr, Sum);
	cout << "Sum : " << result << endl;
	stats(arr, n, ptr, Avg);
	cout << "Avg : " << result << endl;
	stats(arr, n, ptr, Count);
	cout << "Count : " << result << endl;

}
