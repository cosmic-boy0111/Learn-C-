//Write the matrix transpose program using dynamic memory allocation.
//Sample Input :
//Input number of rows for the first array : 2
//Input number of columns for the first array : 3
//Input number for row 1 col 1 : 3
//Input number for row 1 col 2 : 2
//Input number for row 1 col 3 : 5
//Input number for row 2 col 1 : 7
//Input number for row 2 col 2 : 1
//Input number for row 2 col 2 : 9
//Sample Output :

//3(0,0) 7(0,1)
//2(1,0) 1(1,1)
//5(2,0) 9(2,1)

//3(0,0) 2(0,1) 5(0,2)
//7(1,0) 1(1,1) 9(1,2)

#include <iostream>
#include <crtdbg.h>
using namespace std;

int main() {

	int r = 0, c = 0;
	cout << "Enter a number of rows : ";
	cin >> r;
	cout << "Enter a number of cols : ";
	cin >> c;

	int** arr = new int* [r];
	for (int i = 0; i < r; i++) {
		arr[i] = new int[c];
		for (int j = 0; j < c; j++) {
			cout << "Enter number for row " << i + 1 << " col " << j + 1 << " : ";
			cin >> arr[i][j];
		}
	}

	
	int** arr_transpose = new int* [c];
	for (int i = 0; i < c; i++) {
		arr_transpose[i] = new int[r];
	}


	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			arr_transpose[j][i] = arr[i][j];
		}
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			cout << arr_transpose[i][j] << " ";
		}cout << endl;
	}

	for (int i = 0; i < c; i++) {
		delete arr_transpose[i];
		arr_transpose[i] = nullptr;
	}for (int i = 0; i < r; i++) {
		delete arr[i];
		arr[i] = nullptr;
	}

	delete[] arr;
	delete[] arr_transpose;

	arr = nullptr;
	arr_transpose = nullptr;


}
