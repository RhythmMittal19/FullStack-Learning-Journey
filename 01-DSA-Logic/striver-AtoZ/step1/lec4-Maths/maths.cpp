#include <bits/stdc++.h>
using namespace std;

void countDigits()
{
  /*
    Problem 1
    ********************Count all Digits of a Number********************

    You are given an integer n. You need to return the number of digits in the number.

    The number will have no leading zeroes, except when the number is 0 itself.

    Examples:
    --------------------------------------------------------------------
    Input: n = 4

    Output: 1

    Explanation: There is only 1 digit in 4.
    --------------------------------------------------------------------
    Input: n = 14

    Output: 2

    Explanation: There are 2 digits in 14.
  */
  int n;
  cout << "\nEnter your Number: ";
  cin >> n;

  cout << "There are " << ((n > 0) ? ((int)log10(n) + 1) : ((n == 0) ? 1 : 0)) << " digits in number " << n;
}
void reverseNumber()
{
  /*
  ********************Reverse a number********************

  //You are given an integer n.Return the integer formed by placing the digits of n in reverse order.

  Examples :
  --------------------------------------------------------
  Input : n = 25

  Output : 52

  Explanation : Reverse of 25 is 52.
  --------------------------------------------------------
  Input : n = 123

  Output : 321

  Explanation : Reverse of 123 is 321.
  */

  int revNum = 0;
  int n;
  cout << "\nEnter your Number you want to Reverse: ";
  cin >> n;

  while (n > 0)
  {
    int lastdigit = n % 10;
    n /= 10;
    revNum = (revNum * 10) + lastdigit;
  }

  cout << "Your Reveresed Number is : " << revNum;
}
void checkPalindrom()
{
  /*
  ********************Palindrome Number********************

  You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

  A palindrome number is a number which reads the same both left to right and right to left.

  Examples:
  --------------------------------------------------------
  Input: n = 121

  Output: true

  Explanation: When read from left to right : 121.

  When read from right to left : 121.
  --------------------------------------------------------
  Input: n = 123

  Output: false

  Explanation: When read from left to right : 123.

  When read from right to left : 321.
  */
  int n;
  int revNum = 0;

  cout << "\nEnter your Number you want to check palindrom of: ";
  cin >> n;

  int orignalNum = n;
  while (n > 0)
  {
    int lastdigit = n % 10;
    n /= 10;
    revNum = (revNum * 10) + lastdigit;
  }
  cout << "Reverse of your Orignal Number is: " << revNum;
  cout << "\nYour Number: " << orignalNum << " is" << ((revNum == orignalNum) ? " " : " Not ") << "Palindrom";
}
void armstrongNumber()
{
  /*
  ********************Check if the Number is Armstrong********************

  You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

  An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

  Examples:
  ------------------------------------------------------------------------
  Input: n = 153

  Output: true

  Explanation: Number of digits : 3.

  13 + 53 + 33 = 1 + 125 + 27 = 153.

  Therefore, it is an Armstrong number.
  ------------------------------------------------------------------------
  Input: n = 12

  Output: false

  Explanation: Number of digits : 2.

  12 + 22 = 1 + 4 = 5.

  Therefore, it is not an Armstrong number.
  */

  int n;
  cout << "\nEnter your Number you want to check Armstrong of: ";
  cin >> n;

  int orignalNum = n;
  int armstrongNum = 0;

  if (n <= 0)
  {
    cout << "Please enter a valid positive number.\n";
  }
  else
  {
    int power = (int)log10(n) + 1;

    while (n > 0)
    {
      int digit = n % 10;
      armstrongNum += round(pow(digit, power));
      n /= 10;
    }

    cout << "Armstrong Sum: " << armstrongNum << "\n";
    cout << "Result: " << orignalNum << " is " << ((armstrongNum == orignalNum) ? "an " : "NOT an ") << "Armstrong Number\n";
  }
}

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  armstrongNumber();

  cout << "\n";
  return 0;
}
