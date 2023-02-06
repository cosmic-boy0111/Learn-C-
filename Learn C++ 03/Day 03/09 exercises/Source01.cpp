#include<iostream>
using namespace std;
#define max(u,v) (u > v ? u : v);

int main() {

	const int size = 10000;
	int arr[size] = {0};
	int n = 0;
	cout << "Enter a number : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max_ele = 0;
	for (int i = 0; i < n; i++) {
		max_ele = max(max_ele, arr[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < max_ele) {
			ans = max(ans, arr[i]);
		}
	}


	cout << "Second max Element is : " << ans << endl;

	return 0;

}