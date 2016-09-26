#include <assert.h>

#include "vector.hpp"


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

CGI_ARX::Scalar CGI_ARX::norm(const Vector, size_t length) {
	return NULL;
}


// serialization and deserialization

bool CGI_ARX::toString(Vector vector, size_t vectorLength, char *result, size_t resultLength) {
	assert(length > 0);

	return false;
}

CGI_ARX::Vector CGI_ARX::fromString(const char *) {
	return NULL;
}
