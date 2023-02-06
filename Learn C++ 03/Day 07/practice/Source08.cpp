#include <assert.h>
bool is_positive(int n) {
    return n >= 0;
}



int copy_if(int b[], int blen, int a[], int alen, bool (*check)(int)) {
    int len = blen > alen ? alen : blen;
    for (int i = 0; i < len; i++) {
        if (check(a[i])) b[i] = a[i];
    }

    return len;
}

int main() {
    int a[5]{ -3, 1, -2, 6, 9 };
    int b[5]{ 0 };
    int count = copy_if(b, 5, a, 5, is_positive);
    for (int i = 0; i < count; ++i) {
        assert(b[i] >= 0);
    }
}
