#pragma once

#if defined(MYDLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif

class EXPIMP Circle{
private:
	int m_radius;
public:
	Circle(int radius = 1);
public:
	int GetRadius() const;
	void SetRadius(int radius);
public:
	void Print() const;
	double GetArea() const;
};

