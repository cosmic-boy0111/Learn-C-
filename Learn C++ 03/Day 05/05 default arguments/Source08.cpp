int add(int u, int v = 0);
int add(int u);

int main() {
	int result = add(5);
}

int add(int u, int v) { return u + v; }
int add(int u) { return u; }

/*
* above code results in ambiguity
*/