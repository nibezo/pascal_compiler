#include "Course_project.h"
#include <vector>
#include <iostream>



int Compile(const std::string& file_path) {

	Lexer lex(file_path.c_str());
	auto table = lex.ScanCode(); //table of lexemes

	std::cout << table.size();

    for (int i = 0; i < table.size(); ++i) {
        std::cout << table[i].GetLine() << ' ' << table[i].GetName() << ' ' << table[i].GetToken() << std::endl;
    }

	return EXIT_SUCCESS;
}



