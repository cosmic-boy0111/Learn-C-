void f(int p);

void f(const int q);

int main() {
	const int a = 1;
	f(a);
}

void f(int p) {}

void f(const int q) {}


/*
- Results into error.
*/