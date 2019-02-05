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

int count( const string& sentence );

int main()
{
	string sentence;

	cout << "Enter text: "; // PROMPT USER TO INPUT SENTENCE
	getline(cin, sentence); // STORE THE SENTENCE IN STRING

	int spaces = count(sentence); // FUNCTION CALL

	cout << "There are " << spaces << " words in this sentence." << endl; // PRINT RESULTS
	cin.ignore();

	return 0;
}

int count( const string& sentence ) // FUNCTION TO COUNT SPACES
{
	int spaces = 1; // THIS ONE COUNTS FOR THE END SPACE

	for (int i = 0; i < sentence.size(); ++i)
		if (sentence[i] == ' ') ++spaces;

	return spaces;
}
