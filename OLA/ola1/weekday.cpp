#include <iostream>
using namespace std;

int zellerDay(int month, int day, int year);
bool leapYear(int year);
bool validDate(int month, int day, int year);
int daysInMonth(int month, int day);
string dayToDay(int day);



int main()
{
  int month, day, year;

  // PROMPT FOR VALUES
  cout << "Welcome!" << endl
       << "Just tell me you birthday, and I will tell which day of the week you were born." << endl
       << "Lets get started ..." << endl << endl
       << "Please tell me your bithday in the form of: month, day, year" << endl
       << month << day << year << endl;

  // ENTER VALUES AND CHECK IF DATE IS VALID, THEN PRINT THE DAY YOU WERE BORN
  while(cin >> month >> day >> year)
  {
    if(validDate(month, day, year))
    {
      cout << "You were born on " << dayToDay(zellerDay(month, day, year))<< endl;
    }
    else
    {
      cout << "Your input value is not correct." << endl << "The computation is not carried out." << endl;
    }
  }

  return 0;
}

// CALUCLATE ALL THINGS ZELLAR
int zellerDay(int month, int day, int year)
{
  // CALCULATE ZELLER MONTH
  if (month < 3)
  {
    year = year - 1;
    month = month + 10;
  }
  else
  {
    month = month - 2;
  }

  // GET CENTURY AND ZELLER YEAR

  int century = year/100;
  int zellerYear = year%100;

  // GET ZELLER DAY

  int zellerDay = day + (13 * month - 1)/5 + zellerYear +(zellerYear/4) + (century/4)-(2*century);
  zellerDay = zellerDay % 7;
  if (zellerDay < 0)
  {
   zellerDay = zellerDay + 7;
  }
  return zellerDay;
}

// RETURN TRUE OR FALSE FOR LEAPYEAR
bool leapYear(int year)
{
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

// RETURN TRUE OR FALSE IF DATE IS VALID
bool validDate(int month, int day, int year)
{
  // CHECKS TO SEE IF DATE IS VALID
  if (month > 0 && month < 13 && day > 0)
  {
    // CHECKS FOR LEAP YEAR
    if (month == 2 && leapYear(year))
    {
      // IF IT IS A LEAP YEAR, ADD ONE, ELSE KEEP THE SAME
      return day <= daysInMonth(month, day)+1;
    }
    else
    {
      return day <= daysInMonth(month, day);
    }
  }
  return false;
}

// GET THE DAYS IN EACH MONTH
int daysInMonth(int month, int day)
{
	if (month == 1)
	{
		day = 31;
	}
	else if (month == 2)
	{
		day = 28;
	}
	else if (month == 3)
	{
		day = 31;
	}
	else if (month == 4)
	{
		day = 30;
	}
	else if (month == 5)
	{
		day = 31;
	}
	else if (month == 6)
	{
		day = 30;
	}
	else if (month == 7)
	{
		day = 31;
	}
	else if (month == 8)
	{
		day = 31;
	}
	else if (month == 9)
	{
		day = 30;
	}
	else if (month == 10)
	{
		day = 31;
	}
	else if (month == 11)
	{
		day = 30;
	}
	else
	{
		day = 31;
	}
  return day;
}

// CONVERT ZELLERDAY TO DAY
string dayToDay(int day)
{

	if (day == 0)
		return "Sunday";
	else if (day == 1)
		return "Monday";
	else if (day == 2)
		return "Tuesday";
	else if (day == 3)
		return "Wednesday";
	else if (day == 4)
		return "Thursday";
	else if (day == 5)
		return "Friday";
	else
		return "Saturday";
}
