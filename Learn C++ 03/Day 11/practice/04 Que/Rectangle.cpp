#include "Rectangle.h"

Point::Point(int x, int y) {
    m_x = x;
    m_y = y;
}
void Point::SetX(int x) {
    m_x = x;
}
void Point::SetY(int y) {
    m_y = y;
}
int Point::GetX() const {
    return m_x;
}
int Point::GetY() const {
    return m_y;
}

Rectangle::Rectangle(int top, int left, int bottom, int right) {
    m_TopLeft = { top,left };
    M_BottomRight = { bottom,right };
}
Point Rectangle::CenterPoint() const {
    Point center = {
        (m_TopLeft.GetY() + M_BottomRight.GetY()) / 2,
        (m_TopLeft.GetX() + M_BottomRight.GetX()) / 2
    };
    return center;
}
Rectangle Rectangle::Clone() const {
    return { m_TopLeft.GetX(),m_TopLeft.GetY(),M_BottomRight.GetX(),M_BottomRight.GetY() };
}
Point Rectangle::TopLeft() const {
    return m_TopLeft;
}
void Rectangle::MoveToX(int x) {
    m_TopLeft.SetX(x);
}
void Rectangle::MoveToY(int y) {
    m_TopLeft.SetY(y);
}
