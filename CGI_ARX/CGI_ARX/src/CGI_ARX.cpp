#include "vector.hpp"
#include <iostream>


using namespace CGI_ARX;
using namespace std;

int main() {
	Vector v1 = createVector(3);
	v1[0] = 1.2;
	v1[1] = 2.1;
	v1[2] = 3.1;
	char buffer[100];
	if (!toString(v1, 3, buffer, 100))
		cerr << "malo miesta" << endl;
	cout << "toString(v1) == '" << buffer << "'" << endl;

	char buffer2[8];
	if (!toString(v1, 3, buffer2, 5))
		cerr << "malo miesta" << endl;
	cout << "toString(v1) == '" << buffer2 << "'" << endl;

	cout << "IvoPivo check" << endl;
	return 0;
}
