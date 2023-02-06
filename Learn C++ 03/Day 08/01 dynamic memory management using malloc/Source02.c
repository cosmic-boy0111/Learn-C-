#include <malloc.h>

int main() {
	int count = 5;
	int* pn = (int*)malloc(sizeof(int) * count);
	if (pn != NULL) {
		for (int i = 0; i < count; i++)
			pn[i] = i;

		for (int i = 0; i < count; i++)
			*(pn + i) = 2 * i;
	}
	free(pn);
	pn = NULL;
}

/*
- Array allocated using malloc is known as dynamic array.
- use 'pn , 5' expression in watch window to see content of 1st element
- note by default in locals window, pn shows content of 1st element.
*/