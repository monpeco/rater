#include <iostream>
#include <string.h>
#include "common.h"
#include "word.h"


char validate_function_arg(char* fun);
// essen -v -r
 int main(int argc, char* argv[]) {
	if (argc < 3) {
		std::cout << "Error: please specify the word and the function (plus the modifier if required)\n";
		return -1;
	}

	std::string original(argv[1]);
	char function = validate_function_arg(argv[2]);
	if (function == '\0') {
		std::cout << "Error: the \"function\" argument is invalid\n";
		return -1;
	}

	{
		Word word(original, function, '0');
	}
	
	cout_debug("program completed\n");
	return 0;
}

 char validate_function_arg(char* fun) {
	 int len = strlen(fun);
	 if ((len != 2) || (fun[0] != '-')) return '\0';
	 return fun[1];
 }
