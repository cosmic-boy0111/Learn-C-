#include "CircularQueue.h"

CircularQueue::CircularQueue() {
    m_start = -1;
    m_end = -1;
}
bool CircularQueue::Empty() const {
    if (m_start == -1)
        return true;
    else
        return false;
}
bool CircularQueue::Full() const {
    if (m_start == 0 && m_end == QSIZE - 1) {
        return true;
    }
    if (m_start == m_end + 1) {
        return true;
    }
    return false;
}
void CircularQueue::Push(int element) {
    if (Full()) {
        throw std::invalid_argument("Queue is Full");
    }
    else {
        if (m_start == -1) m_start = 0;
        m_end = (m_end + 1) % QSIZE;
        queue[m_end] = element;
    }
}
int CircularQueue::Peek() const {
    if (Empty()) {
        throw std::invalid_argument("Queue is Empty");
    }
    return queue[m_start];
}
void CircularQueue::Pop() {
    if (Empty()) {
        throw std::invalid_argument("Queue is Empty");
    }
    else {
        if (m_start == m_end) {
            m_end = -1;
            m_start = -1;
        }
        else {
            m_start = (m_start + 1) % QSIZE;
        }
    }
}
