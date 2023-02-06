//Write a split function to split the fraction from the integer portion of the real numberand return both the values.
//Sample Input :
//Input the number : 5.6
//Sample Output :
//The integer portion is : 5
//The fraction portion is : .6

#include <iostream>
#include <string>
using namespace std;

void split(double n) {
	string s = to_string(n);
	string integer = "";
	string fraction = "";
	int isFrac = false;
	for (auto& x : s) {
		if (x == '.' || isFrac) {
			isFrac = true;
			fraction.push_back(x);
			continue;
		}
		integer.push_back(x);
	}

	cout << "The integer portion is : " << integer << endl;
	cout << "The fraction portion is : " << fraction << endl;
}

int main() {

	double n = 0.0;
	cout << "Enter a number : ";
	cin >> n;

	split(n);
	
	

}
