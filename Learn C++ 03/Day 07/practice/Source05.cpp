//Write a roots function that computesand returns roots of a quadratic expression through “out parameters”.
//Sample Input :
//Input coefficient ‘a’ : 5
//Input coefficient ‘b’ : 6
//Input constant ‘c’ : 1
//Sample Output :
//Root 1 is : -0.2
//Root 2 is : -1


#include <iostream>
#include <cmath>

using namespace std;

void compute(int a, int b, int c, double* root1, double* root2) {
	*root1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / static_cast<float>(2 * a);
	*root2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / static_cast<float>(2 * a);
}

int main() {

	int a = 0, b = 0, c = 0;
	cout << "Enter coefficient a : ";
	cin >> a;
	cout << "Enter coefficient b : ";
	cin >> b;
	cout << "Enter constant c : ";
	cin >> c;

	double root1 = 0.0;
	double root2 = 0.0;

	compute(a, b, c, &root1, &root2);

	cout << "Root 1 is : " << root1 << endl;
	cout << "Root 2 is : " << root2 << endl;
	

}