/*
-------------------PATTERNS-------------------

RULES
1. for the outer loops (i - rows), count the number of rows
2. for the inner loop (j- columns)[ jo bhi lines mai print hoga and kitni baar hoga ] focus on the columns & connect them somehow to the rows
3. print the "*" or whatever is the patter inside the inner for loop
4. observe the symmetry [optional]
*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void problem1(int n)
{
  // PROBLEM 1
  /*

  * * * * *
  * * * * *
  * * * * *
  * * * * *
  * * * * *

  */

  cout << "PROBLEM 1\n";
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
}
void problem2(int n)
{
  // PROBLEM 2
  /*

  *
  * *
  * * *
  * * * *
  * * * * *

  */

  cout << "PROBLEM 2\n";
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
}
void problem3(int n)
{
  // PROBLEM 3
  /*

  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5

  */

  cout << "PROBLEM 3\n";
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
}
void problem4(int n)
{
  // PROBLEM 4
  /*

  1
  2 2
  3 3 3
  4 4 4 4
  5 5 5 5 5

  */

  cout << "PROBLEM 4\n";
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
}
void problem5(int n)
{
  // PROBLEM 5
  /*

  * * * * *
  * * * *
  * * *
  * *
  *

  */

  cout << "PROBLEM 5\n";
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
}
void problem6(int n)
{
  // PROBLEM 6
  /*

  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1

  */

  cout << "PROBLEM 6\n";
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
}
void problem7(int n)
{
  // PROBLEM 7
  /*

          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *

  // u see how we needed to print tabs in real life just like that we need to print spaces first so what we can do is make a big outer loop for rows and two for loop which is for space and another for stars

  */

  cout << "PROBLEM 7\n";
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
}
void problem8(int n)
{
  // PROBLEM 8
  /*

  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *

  // u see how we needed to print tabs in real life just like that we need to print spaces first so what we can do is make a big outer loop for rows and two for loop which is for space and another for stars

  */

  cout << "PROBLEM 8\n";
  cout << "Number of lines for PROBLEM 8: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    // SPACES
    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }
    // STARS
    for (int j = 0; j < (2 * n - ((2 * i) + 1)); j++)
    {
      cout << " *";
    }
    // SPACES
    for (int j = 0; j < i; j++)
    {
      cout << "  ";
    }
    cout << "\n";
  }
  cout << "\n";
}
void problem9(int n)
{
  // PROBLEM 9
  /*

          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *

  // u see how we needed to print tabs in real life just like that we need to print spaces first so what we can do is make a big outer loop for rows and two for loop which is for space and another for stars
  */

  cout << "PROBLEM 9\n";
  cout << "Number of lines for PROBLEM 9: " << n << "\n";

  for (int i = 0; i < 2 * n; i++)
  {
    int spaces, stars;

    if (i < n)
    {
      spaces = n - i - 1;
      stars = 2 * i + 1;
    }
    else
    {
      spaces = i - n;
      // (4*n - 2*i - 1)
      // 20 - 10 -1 = 9 // 20 - 12 - 1 = 7 ....
      stars = (4 * n - 2 * i - 1);
    }

    // SPACES
    for (int j = 0; j < spaces; j++)
    {
      cout << "   ";
    }

    // STARS
    for (int j = 0; j < stars; j++)
    {
      cout << " * ";
    }

    // SPACES
    for (int j = 0; j < spaces; j++)
    {
      cout << "   ";
    }
    cout << "\n";
  }
  cout << "\n";
}
void problem10(int n)
{
  // PROBLEM 10
  /*

  *
  * *
  * * *
  * * * *
  * * * * *
  * * * *
  * * *
  * *
  *

  */

  cout << "PROBLEM 10\n";
  cout << "Number of lines for PROBLEM 10: " << n << "\n";

  for (int i = 0; i < 2 * n - 1; i++)
  {
    int stars;

    if (i < n)
    {
      // i = 0, n = 5
      // row 0 ----> 0 + 1 = 1 ---- i = 1
      // row 1 ----> 1 + 1 = 2 ---- i = 2
      stars = i + 1;
    }
    else
    {
      // i = 5 , n = 5
      // row 5 ----> 2 * n (10) - i (5) = 5
      // row 6 ----> 2 * n (10) - i (6) = 4
      stars = 2 * n - i - 1;
    }

    // stars
    for (int j = 0; j < stars; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  cout << "\n";
}
void problem11(int n)
{
  // PROBLEM 11
  /*

  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1

  */

  cout << "PROBLEM 11\n";
  cout << "Number of lines for PROBLEM 11: " << n << "\n";
  int start;

  for (int i = 0; i < n; i++)
  {
    start = 0;
    if (i % 2 == 0)
    {
      start = 1;
    }

    for (int j = 0; j <= i; j++)
    {
      cout << start;
      start = 1 - start;
    }
    cout << "\n";
  }
  cout << "\n";
}
void problem12(int n)
{
  // PROBLEM 12
  /*

  1             1
  1 2         2 1
  1 2 3     3 2 1
  1 2 3 4 4 3 2 1

  */

  cout << "PROBLEM 12\n";
  cout << "Number of lines for PROBLEM 12: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    // NUMBER

    for (int j = 0; j <= i; j++)
    {
      cout << (j + 1);
    }

    // SPACES

    // width total = 2 * n
    // Numbers on left and right (i + 1) = (2*i + 2)
    // = 2*n - (2*i + 2)

    for (int j = 0; j < (2 * (n - i - 1)); j++)
    {
      cout << " ";
    }

    // NUMBER

    for (int j = i; j >= 0; j--)
    {
      cout << (j + 1);
    }

    cout << "\n";
  }

  cout << "\n";
}
void problem13(int n)
{
  // PROBLEM 13
  /*

  1
  2  3
  4  5  6
  7  8  9  10
  11 12 13 14 15

  */

  cout << "PROBLEM 13\n";
  cout << "Number of lines for PROBLEM 13: " << n << "\n";
  int num = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << num++ << "  ";
    }
    cout << "\n";
  }

  cout << "\n";
}
void problem14(int n)
{
  // PROBLEM 14
  /*

  A
  A B
  A B C
  A B C D
  A B C D E

  */

  cout << "PROBLEM 14\n";
  cout << "Number of lines for PROBLEM 14: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    char alphabet = 'A';
    for (int j = 0; j <= i; j++)
    {
      cout << alphabet++ << " ";
    }
    cout << "\n";
  }

  cout << "\n";
}
void problem15(int n)
{
  // PROBLEM 15
  /*

  A B C D E
  A B C D
  A B C
  A B
  A

  */

  cout << "PROBLEM 15\n";
  cout << "Number of lines for PROBLEM 15: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    char alphabet = 'A';

    for (int j = 0; j < n - i; j++)
    {
      cout << alphabet++ << " ";
    }

    cout << "\n";
  }

  cout << "\n";
}
void problem16(int n)
{
  // PROBLEM 16
  /*

  A
  B B
  C C C
  D D D D
  E E E E E

  */

  cout << "PROBLEM 16\n";
  cout << "Number of lines for PROBLEM 16: " << n << "\n";
  char alphabet = 'A';

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j <= i; j++)
    {
      cout << alphabet << " ";
    }
    alphabet++;
    cout << "\n";
  }

  cout << "\n";
}
void problem17(int n)
{
  // PROBLEM 17
  /*

        A
      A B A
    A B C B A
  A B C D C B A

  */

  cout << "PROBLEM 17\n";
  cout << "Number of lines for PROBLEM 17: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    char alphabet = 'A';

    // SPACES
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << "  ";
    }

    // ALPHABET
    for (int j = 0; j < (2 * i + 1); j++)
    {
      if (j < i)
      {
        cout << alphabet++ << " ";
      }
      else
      {
        cout << alphabet-- << " ";
      }
    }

    // SPACES
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << "  ";
    }
    cout << "\n";
  }

  cout << "\n";
}
void problem18(int n)
{
  // PROBLEM 18
  /*

  E
  D E
  C D E
  B C D E
  A B C D E

  */

  cout << "PROBLEM 18\n";
  cout << "Number of lines for PROBLEM 18: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    char alphabet = ('A' + n - 1) - i;
    for (int j = 0; j <= i; j++)
    {
      cout << alphabet++ << " ";
    }
    cout << "\n";
  }

  cout << "\n";
}
void problem19(int n)
{
  // PROBLEM 19
  /*

  * * * * * * * * * *
  * * * *     * * * *
  * * *         * * *
  * *             * *
  *                 *
  *                 *
  * *             * *
  * * *         * * *
  * * * *     * * * *
  * * * * * * * * * *

  */

  cout << "PROBLEM 19\n";
  cout << "Number of lines for PROBLEM 19: " << n << "\n";

  for (int i = 0; i < 2 * n; i++)
  {
    int stars, spaces;

    if (i < n)
    {
      spaces = 2 * i;
      stars = n - i;
    }
    else
    {
      spaces = 4 * n - 2 * i - 2; // 20 - 10 - 2 = 8
      stars = i - n + 1;
    }
    // STARS
    for (int j = 0; j < stars; j++)
    {
      cout << " * ";
    }

    // SPACES
    for (int j = 0; j < spaces; j++)
    {
      cout << "   ";
    }

    // STARS
    for (int j = 0; j < stars; j++)
    {
      cout << " * ";
    }

    cout << "\n";
  }

  cout << "\n";
}
void problem20(int n)
{
  // PROBLEM 20
  /*

  *                 * ---- 0
  * *             * * ---- 1
  * * *         * * * ---- 2
  * * * *     * * * * ---- 3
  * * * * * * * * * * ---- 4
  * * * *     * * * * ---- 5
  * * *         * * * ---- 6
  * *             * * ---- 7
  *                 * ---- 8

  */

  cout << "PROBLEM 20\n";
  cout << "Number of lines for PROBLEM 20: " << n << "\n";

  for (int i = 0; i < (2 * n - 1); i++)
  {
    int stars, spaces;

    if (i < n)
    {
      stars = i + 1;
      spaces = 2 * n - 2 * i - 2;
    }
    else
    {
      // i = 5; n = 5 | 2 * n - i - 1 = 10 - 5 - 1 = 4
      // i = 6; n = 5 | 10 - 6 - 1 = 3
      // i = 7; n = 5 | for spaces
      stars = 2 * n - i - 1;
      spaces = 2 * i - 2 * n + 2;
    }

    // STARS
    for (int j = 0; j < stars; j++)
    {
      cout << "* ";
    }
    // SPACES
    for (int j = 0; j < spaces; j++)
    {
      cout << "  ";
    }
    // STARS
    for (int j = 0; j < stars; j++)
    {
      cout << " *";
    }
    cout << "\n";
  }

  cout << "\n";
}
void problem21(int n)
{
  // PROBLEM 21
  /*

  * * * * // constant
  *     *
  *     *
  * * * * // constant

  */

  cout << "PROBLEM 21\n";
  cout << "Number of lines for PROBLEM 21: " << n << "\n";

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
      {
        cout << "* ";
        continue;
      }
      cout << "  ";
    }
    cout << "\n";
  }

  cout << "\n";
}
void problem22(int n)
{
  // PROBLEM 22
  /*

  4 4 4 4 4 4 4 ---- row 0 ---- [0, 7, 0]
  4 3 3 3 3 3 4 ---- row 1 ---- [1, 5, 1]
  4 3 2 2 2 3 4 ---- row 2 ---- [2, 3, 2]
  4 3 2 1 2 3 4 ---- row 3 ---- [3, 1, 3] break pattern v
  4 3 2 2 2 3 4 ---- row 4 ---- [2, 3, 2]
  4 3 3 3 3 3 4 ---- row 5 ---- [1, 5, 1]
  4 4 4 4 4 4 4 ---- row 6 ---- [0, 7, 0]

  */

  cout << "PROBLEM 22\n";
  cout << "Number of lines for PROBLEM 22: " << n << "\n";

  int center_index = n - 1;

  for (int i = 0; i < (2 * n - 1); i++)
  {
    for (int j = 0; j < (2 * n - 1); j++)
    {
      int dist = max(abs(center_index - i), abs(center_index - j));
      cout << (dist + 1) << " ";
    }
    cout << "\n";
  }

  cout << "\n";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  problem22(4);

  return 0;
}
