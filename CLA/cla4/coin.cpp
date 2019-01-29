
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int heads, tails; // DECLARE VARIABLES
  srand(time(0)); // RESETS RANDOM GENERATOR
  int count = 0; // GOTTA PUT VARIABLE OUT IN THE MAIN
  for (count;heads<3;count++)
  {
    if (rand()%2==0) // ASSIGNS HEADS
    {
      tails = 0;
      cout << "Heads" << endl;
      heads++;
    }
    else // ASSIGNS TAILS
    {
      heads = 0;
      cout << "Tails" << endl;
      tails++;
    }
  }
  // PRINT RESULTS
  cout << "It took " << count << " flips to get 3 consecutive heads." << endl;
}
