#include <iostream>
#include "Dude.h"
using namespace std;

int main()
{
	float x1, y1, z1;
	float x2, y2, z2;

	cout << "I will spawn two dudes. Please give coordinates for them!" << endl;

	cout << "Dude1(x): ";
	cin >> x1;

	cout << "Dude1(y): ";
	cin >> y1;

	cout << "Dude1(z): ";
	cin >> z1;

	cout << "Dude2(x): ";
	cin >> x2;

	cout << "Dude2(y): ";
	cin >> y2;

	cout << "Dude2(z): ";
	cin >> z2;

	dudeSpace::dude dude1(x1, y1, z1);
	dudeSpace::dude dude2(x2, y2, z2);

	cout << "Dude 1 is at (" << dude1.getx() << ", " << dude1.gety() << ", " << dude1.getz() << ")" << endl;
	cout << "Dude 2 is at (" << dude2.getx() << ", " << dude2.gety() << ", " << dude2.getz() << ")" << endl;
	cout << "They are " << dude1.distance(dude2) << "cm apart!" << endl;

	return 0;
}
