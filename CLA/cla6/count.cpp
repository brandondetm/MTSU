/*
Brandon Detmongkhoune
CSCI 2170 - 002
02-05-19
CLA 5 count.cpp
This lab had me counting the spaces so I could tell how many words there are
in a string.
*/


#include <iostream>
#include <string>
using namespace std;

int count( const std::string& sentence );

int main()
{
	std::string sentence;

	std::cout << "Enter text: "; // PROMPT USER TO INPUT SENTENCE
	std::cin.getline(sentence); // STORE THE SENTENCE IN STRING

	int spaces = count(sentence); // FUNCTION CALL

	std::cout << "Number of spaces: " << spaces << std::endl; // PRINT RESULTS
	std::cin.ignore();

	return 0;
}

int count( const std::string& sentence ) // FUNCTION TO COUNT SPACES
{
	int spaces = 1; // THIS ONE COUNTS FOR THE END SPACE

	for (int i = 0; i < sentence.size(); ++i)
		if (sentence[i] == ' ') ++spaces;

	return spaces;
}
