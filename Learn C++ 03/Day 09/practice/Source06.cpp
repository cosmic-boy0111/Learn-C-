#include <assert.h>
#include <crtdbg.h>

enum Configuration
{
	None,
	Series,
	Parallel
};

struct Resistor {
	double resistance;
};

struct Circuit {
	Resistor** resistors;
	int size;
	Configuration configuration;
	Circuit* nextCircuit;
};


double EffectiveSeriesResistance(Resistor* resistors[], int len) {
	double ans = 0.0;
	for (int i = 0; i < len; i++) {
		ans += resistors[i]->resistance;
	}
	return ans;
}

double EffectiveParallelResistance(Resistor* resistors[], int len) {
	double ans = 0.0;
	for (int i = 0; i < len; i++) {
		ans += (1 / resistors[i]->resistance);
	}
	return 1 / ans;
}

double EffectiveCircuitResistance(Circuit* c) {
	double ans = 0.0;
	while (c != nullptr) {
		if (c->configuration == Series) {
			ans += EffectiveSeriesResistance(c->resistors, c->size);
		}
		else {
			ans += EffectiveParallelResistance(c->resistors, c->size);
		}
		c = c->nextCircuit;
	}
	return ans;
}

int main() {
	Resistor r1{ 2.0 }, r2{ 3.0 }, r3{ 4.0 }, r4{ 5.0 };
	Circuit* pc = new Circuit{ nullptr, 0, None, nullptr };
	pc->resistors = new Resistor*[2];
	pc->size = 2;
	pc->resistors[0] = &r1;
	pc->resistors[1] = &r2;
	pc->configuration = Series;
	pc->nextCircuit = new Circuit{ nullptr, 0, None, nullptr };
	Circuit* pc2 = pc->nextCircuit;
	pc2->resistors = new Resistor*[2];
	pc2->size = 2;
	pc2->resistors[0] = &r3;
	pc2->resistors[1] = &r4;
	pc2->configuration = Parallel;
	pc2->nextCircuit = nullptr;
	assert(r1.resistance >= 0 && r2.resistance >= 0);
	assert(r3.resistance >= 0 && r4.resistance >= 0);
	double resistance = EffectiveCircuitResistance(pc);
	// write dynamic object release code here
	// Check if dynamically allocated memory is released
	Circuit* temp = nullptr;
	while (pc != nullptr){

		delete[] pc->resistors;
		pc->resistors = nullptr;
		temp = pc->nextCircuit;
		delete pc;
		pc = nullptr;

		pc = temp;
	}
	temp = nullptr;
	pc = nullptr;

	//delete[] pc->resistors;
	//pc->resistors = nullptr;
	//delete pc;
	//pc = nullptr;

	//delete[] pc2->resistors;
	//pc2->resistors = nullptr;
	//delete pc2;
	//pc2 = nullptr;

	_CrtDumpMemoryLeaks();
}
