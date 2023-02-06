//Write the matrix multiplication program using dynamic memory allocation.
//Sample Input :
//Input number of rows for the first array : 2
//Input number of columns for the first array : 2
//Input number for row 1 col 1 : 3
//Input number for row 1 col 2 : 2
//Input number for row 2 col 1 : 5
//Input number for row 2 col 2 : 7
//Input number of rows for the second array : 2
//Input number of columns for the second array : 1
//Input number for row 1 col 1 : 4
//Input number for row 2 col 1 : 7
//Sample Output :
//26
//69


#include <iostream>

using namespace std;

void assign(int** arr,int r,int c) {
	for (int i = 0; i < r; i++) {
		arr[i] = new int[c];
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << "Enter number for row " << i + 1 << " col " << j + 1 << " : ";
			cin >> arr[i][j];
		}
	}
}

int main() {

	int r1 = 0, c1 = 0;
	cout << "Enter number of rows for the first array : ";
	cin >> r1;
	cout << "Enter number of columns for the first array : ";
	cin >> c1;

	int** arr1 = new int* [r1];
	assign(arr1, r1, c1);
	
	/*for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cout << arr1[i][j] << " ";
		}cout << endl;
	}*/
	
	int r2 = 0, c2 = 0;
	cout << "Enter number of rows for the first array : ";
	cin >> r2;
	cout << "Enter number of columns for the first array : ";
	cin >> c2;

	int** arr2 = new int* [r2];

	assign(arr2, r2, c2);


	int** mult = new int* [r1];
	for (int i = 0; i < r1; i++) {
		mult[i] = new int[c2];
	}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			mult[i][j] = 0;
		}
	}

	for (int i = 0; i < r1; ++i)
		for (int j = 0; j < c2; ++j)
			for (int k = 0; k < c1; ++k)
			{
				mult[i][j] += arr1[i][k] * arr2[k][j];
			}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			cout << mult[i][j] << " ";
		}cout << endl;
	}




}