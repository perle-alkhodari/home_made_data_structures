#include <string>
#include <iostream>

namespace helpers {
	// Declarations
	void print(std::string content);

	// Definitions
	void print(std::string content) {
		std::cout << content << std::endl;
	}
}
