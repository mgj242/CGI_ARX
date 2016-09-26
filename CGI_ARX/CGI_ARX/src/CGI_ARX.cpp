#include <iostream>

#include "vector.hpp"


using namespace CGI_ARX;
using namespace std;


int main() {
	Vector v1 = createVector(3);
	v1[0] = 1.;
	v1[1] = 2.;
	v1[2] = 3.;
	Vector v2 = createVector(3);
	Vector v3 = createVector(3);

	Vector vysledok = crossProduct(add(v1, v2, 3), v3, 3); // ~ (v1 + v2) x v3

	char buffer[100];
	if (!toString(v1, 3, buffer, 20))
		cout << "whoa, malo miesta!" << endl;
	cout << "toString(v1, ..., 20) == '" << buffer << "'" << endl; // "1.0 2.0 3.0 "

	if (!toString(v1, 3, buffer, 8))
		cout << "ano, malo miesta" << endl;
	cout << "toString(v1, ..., 8) == '" << buffer << "'" << endl; // "1.0 2.0 "

    return 0;
	cout << "C++ programming";
}
