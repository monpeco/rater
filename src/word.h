#include <string>

#ifndef WORD_H
#define WORD_H

class Word {
private:
	std::string original;
	char function;
	char modifier;

public:
	Word(std::string o, char f, char m)
		: original(o), function(f), modifier(m)
	{
		std::cout << "word's constructor";
		std::cout << "\noriginal: " << original;
		std::cout << "\nfunction: " << function;
		std::cout << "\nmodifier: " << modifier << "\n";
	};
	~Word() {
		std::cout << "word's destructor\n";
	};
};

#endif