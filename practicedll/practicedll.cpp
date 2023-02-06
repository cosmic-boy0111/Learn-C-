#include "practicedll.h"
#include <climits>

// private

void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

bool isPresent(int a[], int len, int ele) {
	for (int i = 0; i < len; i++) {
		if (a[i] == ele) return true;
	}
	return false;
}

int min(int a, int b) {
	if (a < b) return a;
	return b;
}

int max(int a, int b) {
	if (a > b) return a;
	return b;
}


// public

void copy(int a[], int b[], int len) {
	for (int i = 0; i < len; i++) {
		a[i] = b[i];
	}
}

void replace(int a[], int len, int oldvalue, int newvalue) {
	for (int i = 0; i < len; i++) {
		if (a[i] == oldvalue) a[i] = newvalue;
	}
}

void sort(int a[], int len) {
	int i, j;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a, i, j);
			}
		}
	}
}


int set_union(int a[], int alen, int b[], int blen, int c[]){
	int k = 0;
	for (int i = 0; i < alen; i++) {
		c[k++] = a[i];
	}

	for (int i = 0; i < blen; i++) {
		if (!isPresent(c, k, b[i])) {
			c[k++] = b[i];
		}
	}

	return k;

}

bool equal(int a[], int alen, int b[], int blen) {
	if (alen != blen) return false;
	for (int i = 0; i < alen; i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
}

int mismatch(int a[], int alen, int b[], int blen) {
	int mn = min(alen, blen);
	for (int i = 0; i < mn; i++) {
		if (a[i] != b[i]) return i;
	}
	return -1;
}

int find_first_of(int a[], int alen, int b[], int blen) {
	if (alen > blen) return -1;
	for (int i = 0; i < blen; i++) {
		int alen_after = 0;
		for (int j = 0, k = i; j < alen and a[j] == b[k]; j++, k++, alen_after++);
		if (alen_after == alen) return i;
	}
	return -1;
}

void merge(int a[], int alen, int b[], int blen, int c[], int clen) {
	int k = 0;
	int i = 0; 
	int j = 0;
	while (i < alen and j < blen) {
		if (a[i] < b[j]) {
			c[k] = a[i];
			i++;
		}
		else {
			c[k] = b[j];
			j++;
		}
		k++;
	}

	while (i < alen) {
		c[k++] = a[i++];
	}
	while (j < blen) {
		c[k++] = b[j++];
	}
}

int max(int a[], int len) {
	int mx = INT_MIN;
	for (int i = 0; i < len; i++) {
		// here max get overrites as it define as private function
		mx = max(mx, a[i]);
	}
	return mx;
}

void rotate_left(int a[], int len) {
	if (len <= 1) return;
	int first_ele = a[0];
	for (int i = 0; i < len - 1; i++) {
		a[i] = a[i + 1];
	}
	a[len - 1] = first_ele;
}

