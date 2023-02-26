#if !defined(DUMMY_CLASS)
#define DUMMY_CLASS

class Dummy {

};
#endif

// multiple inclusion guards

#if !defined(DUMMY_CLASS)
#define DUMMY_CLASS

class Dummy {

};
#endif

int main() {
	Dummy a;
}