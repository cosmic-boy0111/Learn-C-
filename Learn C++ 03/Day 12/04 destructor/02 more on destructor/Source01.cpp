class Dummy {

public:
	int a = 5;
	~Dummy();
};

Dummy::~Dummy() {}

int main() {
	Dummy u;
	u.~Dummy();
	u.a = 10;
}

/*
- Explicit call to a destructor is possible.
- Note constructor cannot be called explicitly.
- Usually we donot call destructor explicitly.
*/