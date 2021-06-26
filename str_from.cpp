#include <sstream>
#include "environment_functions.hpp"

std::string str_from(int x) {
	std::ostringstream sstream;
	sstream << x;
	return sstream.str();
}