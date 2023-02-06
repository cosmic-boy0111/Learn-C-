#include<iostream>;
#include<string>
using namespace std;


int main() {

	string str = "";
	cout << "Enetr a String : ";
	getline(cin, str);


	cout << "Converted string is : ";
	for (auto& x : str) {
		if (x == ' ') {
			cout << " ";
			continue;
		}
		if (x == 'z' || x == 'Z') {
			cout << (x == 'z'? 'a' : 'A');
			continue;
		}

		cout << static_cast<char>(x + 1);
	}





}