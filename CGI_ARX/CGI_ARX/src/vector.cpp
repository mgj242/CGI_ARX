#include <assert.h>
#include <cstdio>
#include <cstring>

#include "vector.hpp"


#if _MSC_VER == 1600
#define snprintf _snprintf
#endif


// construction and destruction

CGI_ARX::Vector CGI_ARX::createVector(size_t length) {
	assert(!"implemented");
	return NULL;
}

void CGI_ARX::destroyVector(Vector vector) {
}


// arithmetic operations

CGI_ARX::Vector CGI_ARX::add(Vector left, const Vector right, size_t length) {
	return NULL;
}

CGI_ARX::Vector CGI_ARX::multiply(Vector left, const Scalar right, size_t length) {
	return NULL;
}

CGI_ARX::Vector CGI_ARX::crossProduct(Vector left, const Vector right, size_t length) {
	return NULL;
}

CGI_ARX::Scalar CGI_ARX::norm(const Vector, size_t length) {
	return NULL;
}


// serialization and deserialization

bool CGI_ARX::toString(Vector vector, size_t vectorLength, char *result, size_t resultLength) {
	assert(vectorLength > 0);
	assert(resultLength > 0);
	size_t resultIx = 0;
	for (size_t ix = 0; ix < vectorLength; ++ix) {
		const Scalar scalar = vector[ix];
		size_t volneMiesto = resultLength - resultIx;
		size_t zapisanychBajtov = snprintf(&result[resultIx], volneMiesto, "%g ", scalar);
		if (volneMiesto == zapisanychBajtov)
  		   return ix == vectorLength - 1;
		resultIx += zapisanychBajtov;
	}
	return true;
}

CGI_ARX::Vector CGI_ARX::fromString(const char *) {
	return NULL;
}

