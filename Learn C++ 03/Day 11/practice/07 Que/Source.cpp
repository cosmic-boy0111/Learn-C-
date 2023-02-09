#include "CircularQueue.h"

int main() {
    int data[] = { 3, 9, 3, 2, 4, 8, 7, 0, 1, 8 };
    CircularQueue queue;

    assert(queue.Empty() == true);
    assert(queue.Full() == false);

    int len = sizeof(data) / sizeof(int);
    for (int i = 0; i < len; ++i) {
        queue.Push(data[i]);
    }

    assert(queue.Empty() == false);
    assert(queue.Full() == true);

    for (int i = 0; i < len; ++i) {
        assert(queue.Peek() == data[i]);
        queue.Pop();
    }

    assert(queue.Empty() == true);
    assert(queue.Full() == false);
}
