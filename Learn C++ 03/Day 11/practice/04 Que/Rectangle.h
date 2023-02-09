#pragma once

class Point {
private:
    int m_x;
    int m_y;
public:
    Point(int x = 0, int y = 0);
    void SetX(int x);
    void SetY(int y);
    int GetX() const;
    int GetY() const;
};


class Rectangle {
private:
    Point m_TopLeft;
    Point M_BottomRight;

public:
    Rectangle(int top = 0, int left = 0, int bottom = 0, int right = 0);
    Point CenterPoint() const;
    Rectangle Clone() const;
    Point TopLeft() const;
    void MoveToX(int x);
    void MoveToY(int y);

};
