#include <iostream>
using namespace std;

int main()
{
  int smaller, middle, larger;

  // PROMPT FOR VALUES
  cout << "Please enter three integer values" << endl;
  cin >> smaller >> middle >> larger;

  // ORGANIZE VALUES FROM LEAST TO GREATEST
  int temp;
  if (smaller > larger)
	{
		temp = smaller;
		smaller = larger;
		larger = temp;
	}


	if (smaller > middle)
	{
		temp = smaller;
		smaller = middle;
		middle = temp;
	}



	if (middle > larger)
	{
		temp = middle;
		middle = larger;
		larger = temp;
	}

  // PRINT RESULTS

  cout << "The three values in ascending order are: " << smaller << " " << middle << " " << larger;

}
