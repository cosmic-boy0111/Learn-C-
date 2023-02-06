#include <assert.h>
int multiply_by_2(int n) {
    return 2 * n;
}

void for_each(int arr[], int len, int (*mult)(int)) {
    for (int i = 0; i < len; i++) {
        arr[i] = mult(arr[i]);
    }
}

int main() {
    int a[]{ 1, 2, 3, 4, 5 };
    int result[]{ 2, 4, 6, 8, 10 };
    for_each(a, 5, multiply_by_2);
    for (int i = 0; i < 5; ++i) {
        assert(a[i] == result[i]);
    }
}
// Define your find_if function here
