void alloc(int** pn) {
	*pn = new int;
}

int main() {
	int* pa = nullptr;
	alloc(&pa);
	delete pa;
	pa = nullptr;
}

/*
* After executing call to 'alloc', what would be the state of pa
*/