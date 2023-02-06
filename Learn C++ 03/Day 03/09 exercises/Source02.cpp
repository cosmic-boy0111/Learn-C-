#include <iostream>
#include <map>
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

	int arr2[20000] = { 0 };
	for (int i = 0; i < n; i++) {
		arr2[1000 + arr[i]]++;
	}

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < 20000; i++) {
		if (cnt < arr2[i]) {
			cnt = arr2[i];
			ans = i - 1000;
		}
	}

	cout << "Most Repeating Element is : " << ans << endl;
	




	return 0;
}