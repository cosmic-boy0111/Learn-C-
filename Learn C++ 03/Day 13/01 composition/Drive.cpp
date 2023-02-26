#include <iostream>
using namespace std;
#include "Drive.h"
Drive::Drive(char driveLetter) : m_driveLetter(driveLetter){
	cout << "From Drive constructor : " << endl;
}

Drive::~Drive(){
	cout << "From Drive destructor : " << endl;
}