class Integer {
public:
	Integer(int i) : m_i(i) {}
public:
	operator int() const { return m_i; }
private:
	int m_i;
};

int main() {
	Integer i(1);
	int j = i; // int j = int(i); or int j = (int)i -> i.operator int();
}
