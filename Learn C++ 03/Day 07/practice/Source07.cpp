#include <assert.h>
int Odd() {
    static int n = -1;
    n += 2;
    return n;
}
int Natural() {
    static int n = 0;
    return ++n;
}

void generate(int arr[], int len, int (*function)()) {
    for (int i = 0; i < len; i++) {
        arr[i] = function();
    }
}

int main() {
    int a[5]{ 0 };
    generate(a, 5, Odd);
    for (int i = 0, j = 1; i < 5; ++i, j += 2) {
        assert(a[i] == j);
    }
    generate(a, 5, Natural);
    for (int i = 0, j = 1; i < 5; ++i, ++j) {
        assert(a[i] == j);
    }
}
