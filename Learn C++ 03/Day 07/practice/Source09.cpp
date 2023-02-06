#include <assert.h>
#include <string>;

bool pred(char c) {
    return c == 'd';
}

char* find_if(char s[], bool (*check)(char)) {
    char* ptr = &s[0];
    while (*ptr != '\0') {
        if (check(*ptr)) return ptr;
        ptr++;
    }
    return nullptr;
}

int main() {
    char s[] = "the lazy dog jumped over the brown fox";
    char* t = find_if(s, pred);
    assert(strcmp(t, "dog jumped over the brown fox") == 0);
}
