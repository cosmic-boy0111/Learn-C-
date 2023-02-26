template<class T, class U, class V>
void f(T a, U b, V c) {

}

// partial specialization
template<class T, class V>
void f(T a, int b, V c) {

}

// partial specialization
template<class V>
void f(double a, int b, V c) {

}

// full specialization
template<>
void f(double a, double b, bool c) {

}


int main() {
	f(5, 'a', 2.5);
	f('a', 5, 2.5);
	f(2.5, 5, 'a');
	f(2.6, 1.8, true);
	return 0;
}