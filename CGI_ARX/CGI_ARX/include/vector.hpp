#ifndef __cgi_arx_vector_hpp
#define __cgi_arx_vector_hpp


#include <cstddef>

#include "scalar.hpp"


namespace CGI_ARX {

	typedef Scalar* Vector;


	// construction and destruction

	/**
	 * @returns newly allocated vector of given length or NULL
	 * @see destroyVector(Vector)
	 */
	Vector createVector(size_t length);

	/**
	 * Every vector created by a call t createVector() must be destroyed by calling this function.
	 */
	void destroyVector(Vector);


	// arithmetic operations

	/**
	 * @returns Modified left vector.
	 */
	Vector add(Vector left, const Vector right, size_t length);

	/**
	 * @returns Modified left vector.
	 */
	Vector multiply(Vector left, const Scalar right, size_t length);

	/**
	 * @returns Modified left vector.
	 */
	Vector multiply(Vector left, const Vector right, size_t length);

	/**
	 * @returns Euclidian norm of the input vector.
	 */
	Scalar norm(const Vector, size_t length);


	// serialization and deserialization

	/**
	 * Serializes provided vector into human readable form.
	 * @input vector Input vector to be serialized.
	 * @output result Place for resulting serialized string
	 * @input resultSize Length of preallocated result string, in bytes.
	 * @returns true iff (if and only if) the serialization of the whole vector fits into provided result string
	 *
	 * @example
	 *		Vector v = createVector(3);
	 *		char buffer[100];
	 *		if (!toString(v, buffer, 100))
	 *         cerr << "result buffer too small!" << endl;
	 */
	bool toString(Vector vector, char *result, size_t resultSize);

	/**
	 * @returns vector deserialized from input string
	 */
	Vector fromString(const char *);
}


#endif
