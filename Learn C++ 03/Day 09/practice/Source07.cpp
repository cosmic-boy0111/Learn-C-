#include <assert.h>
#include <crtdbg.h>

struct Set
{
    int* values;
    int size;
};


bool isPresent(int* arr,int size,int ele) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == ele) return true;
    }
    return false;
}


void Union(Set s,Set t,Set* u) {
    u->values = new int[100000];
    int size = 0;
    for (int i = 0; i < s.size; i++) {
        if (!isPresent(u->values, size, s.values[i]))
            u->values[size++] = s.values[i];
    }
    for (int i = 0; i < t.size; i++) {
        if(!isPresent(u->values,size,t.values[i]))
            u->values[size++] = t.values[i];
    }
    u->size = size;
}

void Intersect(Set s,Set t,Set* u) {
    delete[] u->values;
    u->values = nullptr;
    int size = 0;
    u->values = new int[100000];
    for (int i = 0; i < s.size; i++) {
        if (isPresent(t.values, t.size, s.values[i]) and !isPresent(u->values, size, s.values[i])) {
            u->values[size++] = s.values[i];
        }
    }

    u->size = size;

}

int main() {
    Set s{ nullptr };
    s.size = 5;
    s.values = new int[s.size] { 1, 2, 3, 3, 4 };
    Set t{ nullptr };
    t.size = 7;
    t.values = new int[t.size] { 1, 3, 4, 5, 5, 5, 9, 0 };
    Set u{ nullptr };
    Union(s, t, &u);
    int union_result[]{ 1, 2, 3, 4, 5, 9, 0 };
    for (size_t i = 0; i < u.size; ++i) {
        assert(i < sizeof(union_result) / sizeof(int));
        assert(u.values[i] == union_result[i]);
    }
    Intersect(s, t, &u);
    int intersect_result[]{ 1, 3, 4 };
    for (size_t i = 0; i < u.size; ++i) {
        assert(i < sizeof(intersect_result) / sizeof(int));
        assert(u.values[i] == intersect_result[i]);
    }
    // write dynamic object release code here
    // Check if dynamically allocated memory is released

    delete[] s.values;
    s.values = nullptr;
    delete[] t.values;
    t.values = nullptr;
    delete[] u.values;
    u.values = nullptr;

    _CrtDumpMemoryLeaks();
}
