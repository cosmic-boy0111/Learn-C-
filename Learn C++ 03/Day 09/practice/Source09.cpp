#include <iostream>
#include <vector>
using namespace std;

enum Clients {C1 , C2};

struct Product {
	int row_materials;
};

struct Order {
	Product product;
	Clients C;
};

void Make_order(vector<Order> &Orders,Product& p, Clients &c) {
	p.row_materials += 1;
	Orders.push_back({ p,c });
}

void display_materials(Product product_array[],int len) {
	int total_materials = 0;
	for (int i = 0; i < len; i++) {
		cout << "Materials required for product " << i + 1 << " is : " << product_array[i].row_materials << endl;
		total_materials += product_array[i].row_materials;
	}
	cout << "Toatal materials required is : " << total_materials << endl;
}

int main() {

	Product p1{ 0 }, p2{ 0 }, p3{ 0 };
	Product product_array[] = { p1, p2, p3 };
	vector<Order> orders;
	while (true){
		char c;
		cout << "enter o for place order : " << endl;
		cout << "enter r for display row materials : " << endl;
		cout << "enter q for exit : " << endl;
		cout << "Enter query : ";
		
		cin >> c;

		if (tolower(c) == 'o') {
			int product_index = 0;
			int customer_number = 0;
			cout << "Enter product number {1 or 2 or 3} : ";
			cin >> product_index;
			cout << "Enter customer number {1 or 2} : ";
			cin >> customer_number;
			Clients c = (Clients)(customer_number - 1);
			Make_order(orders, product_array[product_index - 1], c);
			cout << "Your order placed sucessfully : " << endl;
		}
		else if (tolower(c) == 'r') {
			display_materials(product_array,3);
		}
		else if(tolower(c) == 'q') {
			break;
		}
		else {
			cout << "You Enter a wrong Query : " << endl;
		}


	}

	
	
}