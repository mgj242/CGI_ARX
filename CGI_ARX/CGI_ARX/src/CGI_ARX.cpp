#include "vector.hpp"


using namespace CGI_ARX;


int main() {
	Vector v1 = createVector(3);
	v1[0] = 1.;
	v1[1] = 2.;
	v1[2] = 3.;
	Vector v2 = createVector(3);
	Vector v3 = createVector(3);

	Vector vysledok = crossProduct(add(v1, v2, 3), v3, 3); // ~ (v1 + v2) x v3

    return 0;
}
