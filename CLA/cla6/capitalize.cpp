/*
Brandon Detmongkhoune
CSCI 2170 - 002
02-05-19
CLA 5 capitalize.cpp
This lab had me capitalizing the first letter in words.
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
   const int size = 100;

   char sentence[size];

   cout << "Enter text: "; // PROMPT USER FOR SENTENCE
   cin.getline(sentence, size); // STORE THE INPUT

   sentence[0] = toupper(sentence[0]); // UPPERCASE EACH LETTER

   for (int i = 1; i < size; i++) // CORRECTS THE REST OF THE LETTERS TO UPPER OR LOWER
   {
        if ( sentence[i - 1] == ' ' )
            sentence[i] = toupper(sentence[i]);
        else
            sentence[i] = tolower(sentence[i]);
   }

   cout << sentence <<endl; // DISPLAY RESULTS

   return 0;
}
