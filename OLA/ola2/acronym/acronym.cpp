/*
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

	for (int i = 0; i < sentence.size(); ++i)
		if (sentence[i] == ' ')


	return spaces;
}

*/

#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
  //open file
  ifstream input;
  input.open("../Acronym.dat");
  assert(input);

  //loop through each phrase
  string phrase;
  while(getline(input, phrase))
  {
    cout << phrase << " -> ";
    //loop through all spaces
    while(phrase.find(" ") != string::npos)
    {
      //output first letter
      cout << (char)toupper(phrase[0]);
      //remove everything up to the space
      phrase = phrase.substr(phrase.find(" ") + 1);
    }

    //output last letter and new line
    cout << (char)toupper(phrase[0]) << endl;
  }
}
