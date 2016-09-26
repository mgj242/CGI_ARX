#include "vector.hpp"
#include <assert.h>
#include <cstring>
#include <cstdio>


// construction and destruction

#if _MSC_VER == 1600
#define snprintf _snprintf
#endif


CGI_ARX::Vector CGI_ARX::createVector(size_t length) {
	if (length <= 0)
		return NULL;
	return new Scalar[length];
}

void CGI_ARX::destroyVector(Vector vector) {
	delete[] vector;
}


// arithmetic operations

CGI_ARX::Vector CGI_ARX::add(Vector left, const Vector right, size_t length) {
	for (size_t i = 0; i < length; i++) {
		left[i] += right[i];
	}
	return left;
}

CGI_ARX::Vector CGI_ARX::multiply(Vector left, const Scalar right, size_t length) {
	for (size_t i = 0; i < length; i++) {
		left[i] *= right;
	}
	return left;
}

CGI_ARX::Vector CGI_ARX::crossProduct(Vector left, const Vector right, size_t length) {
	return NULL;
}

CGI_ARX::Scalar CGI_ARX::norm(const Vector, size_t length) {
	return NULL;
}


// serialization and deserialization

bool CGI_ARX::toString(Vector vector, size_t vectorLength, char *result, size_t resultLength) {
	size_t resultIx = 0; //aktualne miesto posledneho znaku
	for (size_t ix = 0; ix < vectorLength; ix++) {
		const Scalar scalar = vector[ix];
		size_t volneMiesto = resultLength - resultIx;
		const char *format = ix > 0 ? ", %g" : "%g";
		size_t zapisanychBajtov = snprintf(&result[resultIx], volneMiesto, format, scalar);
		resultIx += zapisanychBajtov;
		if (resultIx >= resultLength)
			return ix == vectorLength - 1; //podmienka je splnena len ak som v poslednej iteracii
	}
	return true;
}

CGI_ARX::Vector CGI_ARX::fromString(const char *) {
	return NULL;
}
