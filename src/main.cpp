#include <iostream>
#include "word.h"

// essen -v -r
 int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "Error: please specify the word and the function (plus the modifier if required)\n";
		return -1;
	}

	std::string original(argv[1]);
	char function = argv[2][0];

	{
		Word word(original, function, '0');
	}
	
	std::cout << "program completed\n";
	return 0;
}