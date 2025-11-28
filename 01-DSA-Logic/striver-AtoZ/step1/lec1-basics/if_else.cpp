/*
Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise.


For printing use:-

for C++ : cout << variable_name;
for Java : System.out.print();
for Python : print()
for Javascript : console.log()
for C# : Console.WriteLine();
for Go : fmt.Println()
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int marks;
  cin >> marks;

  if (marks >= 90)
  {
    cout << "Grade A";
  }
  else if (marks >= 70)
  {
    cout << "Grade B";
  }
  else if (marks >= 50)
  {
    cout << "Grade C";
  }
  else if (marks >= 35)
  {
    cout << "Grade D";
  }
  else
  {
    cout << "Fail";
  }


  cout << "\n";
  return 0;
}
