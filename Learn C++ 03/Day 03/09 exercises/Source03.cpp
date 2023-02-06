#include<iostream>
using namespace std;


int main() {

	const int size = 10000;
	int arr[size] = { 0 };
	int n = 0;
	cout << "Enter a array size : ";
	cin >> n;
	cout << "Enter Array values : " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int arr_neg[size] = { 0 };
	int arr_pos[size] = { 0 };

	int i_neg = 0;
	int i_pos = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) arr_neg[i_neg++] = arr[i];
		else arr_pos[i_pos++] = arr[i];
	}
	int k = 0;
	for (int i = 0; i < i_neg; i++) {
		arr[k++] = arr_neg[i];
	}
	for (int i = 0; i < i_pos; i++) {
		arr[k++] = arr_pos[i];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}



    return 0;

}