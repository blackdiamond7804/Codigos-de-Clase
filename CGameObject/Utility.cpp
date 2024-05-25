#include"Utility.h"

using namespace std;

void printHexVal(uint16_t val) {
	cout << hex << setw(2) << setfill('0') << val;
}