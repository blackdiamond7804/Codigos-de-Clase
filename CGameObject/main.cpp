#include"CGameObject.h"
#include"Utility.h"

using namespace std;

int main() {
	CGameObject* g1, * g2;
	uint8_t* p;

	//Reserve Memory
	g1 = new CGameObject(1, 2);
	g2 = new CGameObject(3, 7);

	//Print Memory
	p = reinterpret_cast<uint8_t*>(g1) - 16;
	printRawMem(p, 16, 4);
	cout << "----------------------- \n";

	//Delete one object and print memory
	delete g2;
	printRawMem(p, 16, 4);
	cout << "-------------------------- \n";

	//Delete the other object and print memory again
	delete g1;
	printRawMem(p, 16, 4);

	return 0;
}