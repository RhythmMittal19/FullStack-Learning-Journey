#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << "so this is a 5x5 dimensional structure\n\n";
  // this outputs a 5x5 dimensional structure
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      // realization of to print everything in a single line dont make a newline and keep printing everything on the same line if u want to make patterns then u need to change what to be printed inside the loops
      cout << i << "-" << j << ";";
    }
    cout << "\n";
  }

  cout << "\nthis is something which i dont even know\n\n";
  // if we print same thing a little differently

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      // here the most inner statement decides what will print in a single line and how many times and the outer loop decides the row if cout is printed after the inner for loop
      cout << i << "-" << j << ";\n";
    }
  }

  // so to make a pyramid like structure or triangle it should be like this

  cout << "\nthis is triangle bitch\n\n";

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < i+1; j++)
    {
      //this loops condition says i will run until the row ends me
      cout << "*";
    }
    cout << "\n";
  }

  cout << "\n";
  return 0;
}
