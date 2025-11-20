/*
-------------------PATTERNS-------------------

RULES
1. for the outer loops (i - rows), count the number of rows
2. for the inner loop (j- columns)[ jo bhi lines mai print hoga and kitni baar hoga ] focus on the columns & connect them somehow to the rows
3. print the "*" or whatever is the patter inside the inner for loop
4. observe the symmetry [optional]
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // commeting the below two lines to see input different from output

  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  /*

  PROBLEM 1

  * * * * *
  * * * * *
  * * * * *
  * * * * *
  * * * * *

  */

  cout << "PROBLEM 1\n";
  cout << "Input Number of lines: ";
  int n; // number of rows
  cin >> n;
  cout << "Number of lines for PROBLEM 1: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  cout << "\n";

  /*

  PROBLEM 2

  *
  * *
  * * *
  * * * *
  * * * * *

  */

  cout << "PROBLEM 2\n";
  cout << "Input Number of lines: ";
  cin >> n;
  cout << "Number of lines for PROBLEM 2: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  cout << "\n";

  /*

  PROBLEM 3

  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5

  */

  cout << "PROBLEM 3\n";
  cout << "Input Number of lines: ";
  cin >> n;
  cout << "Number of lines for PROBLEM 3: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << (j + 1) << " ";
    }
    cout << "\n";
  }
  cout << "\n";

  /*

  PROBLEM 4

  1
  2 2
  3 3 3
  4 4 4 4
  5 5 5 5 5

  */

  cout << "PROBLEM 4\n";
  cout << "Input Number of lines: ";
  cin >> n;
  cout << "Number of lines for PROBLEM 4: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << (i + 1) << " ";
    }
    cout << "\n";
  }
  cout << "\n";

  /*

  PROBLEM 5

  * * * * *
  * * * *
  * * *
  * *
  *

  */

  cout << "PROBLEM 5\n";
  cout << "Input Number of lines: ";
  cin >> n;
  cout << "Number of lines for PROBLEM 5: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < (n - i); j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  cout << "\n";

  /*

  PROBLEM 6

  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1

  */

  cout << "PROBLEM 6\n";
  cout << "Input Number of lines: ";
  cin >> n;
  cout << "Number of lines for PROBLEM 6: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < (n - i); j++)
    {
      cout << (j + 1) << " ";
    }
    cout << "\n";
  }
  cout << "\n";

  /*

  PROBLEM 7
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *

  */

  // u see how we needed to print tabs in real life just like that we need to print spaces first so what we can do is make a big outer loop for rows and two for loop which is for space and another for stars

  cout << "PROBLEM 7\n";
  cout << "Input Number of lines: ";
  cin >> n;
  cout << "Number of lines for PROBLEM 7: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    // SPACES
    for (int j = 0; j < (n - (i + 1)); j++)
    {
      cout << "  ";
    }
    // STARS
    for (int j = 0; j < (2 * i + 1); j++)
    {
      cout << " *";
    }
    // SPACES
    for (int j = 0; j < (n - (i + 1)); j++)
    {
      cout << "  ";
    }
    cout << "\n";
  }
  cout << "\n";

  return 0;
}
