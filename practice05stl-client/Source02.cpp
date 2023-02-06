#include <assert.h>
#include "practice05.h"
#include <string>

using namespace std;

int main() {
    int result = 0;
    string s = "Your language quality should improve, as you grow in age.";
    result = search(s, "age");
    assert(result == 10);
    result = search(s, "Age");
    assert(result == -1);
    result = search(s, "age", false);
    assert(result == 10);
    result = search(s, "Age", false, true);
    assert(result == 53);
}
