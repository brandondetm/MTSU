/*
Brandon Detmongkhoune
CSCI 2170 - 002
02-07-19
OLA 2 perfect.cpp
this lab had me checking all the perfect numbers between 0 and 10000.
*/
#include <iostream>

using namespace std;

bool IsPerfect (int number);

int main()
{
	cout << "The perfect numbers between 0 and 10000 are: " << endl;

  for(int number = 1; number < 10000; number++) // check numbers between 0-10000
  {
    if(IsPerfect(number))
    {
  	  cout << number << endl; // prints number
    }
  }
}

bool IsPerfect(int number)
{
  if(number <= 0)
  {
    return false; // if number less than 0, return false
  }

  int sum, count;

  for(count = 1, sum = 0; count < number; count++)
  {
    //add factors to sum
    if(number % count == 0)
    {
      sum += count;
    }
  }
  return sum == number;
}
