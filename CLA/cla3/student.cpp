#include <iostream>
using namespace std;

string getGrade(int hours);

int main()
{
  int freshman, sophomore, junior, senior, hours;

  // PROMPT USER FOR CREDIT HOURS
  cout << "Please enter your total credit hours earned: " << endl;
  // CHECK TO SEE IF HOURS IS VALID AND RETURN GRADE LEVEL
  while (cin >> hours)
  {
    if (hours < 0)
    {
      cout << "Invalid Input";
    }
    else
    {
      cout << "You are a " << getGrade(hours);
    }
  }
}

// GETS GRADE LEVEL
string getGrade(int hours)
{
  if (hours <= 15)
  {
    return "Freshman";
  }
  else if (hours <= 45)
  {
    return "Sophomore";
  }
  else if (hours <=75)
  {
    return "Junior";
  }
  else
  {
    return "Senior";
  }

}
