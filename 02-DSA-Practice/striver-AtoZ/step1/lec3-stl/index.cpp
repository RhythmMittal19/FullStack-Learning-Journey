#include <bits/stdc++.h> // all library included
#include <cstdlib>       // Needed for system("clear")
using namespace std;

void explainPair()
{
  cout << "--- PAIR EXPLANATION ---\n\n";

  // --- 1. BASIC PAIR ---
  cout << "1. BASIC PAIR\n";
  pair<int, int> p = {1, 3};

  cout << "   Code: pair<int, int> p = {1, 3};\n";
  cout << "   p.first:  " << p.first << "\n";
  cout << "   p.second: " << p.second << "\n\n";

  // --- 2. NESTED PAIR ---
  cout << "2. NESTED PAIR\n";
  // Data Type: { int, {int, int} }
  pair<int, pair<int, int>> p1 = {1, {3, 4}};

  cout << "   Code: pair<int, pair<int, int>> p1 = {1, {3, 4}};\n";
  cout << "   p1.first: " << p1.first << "\n";

  // Accessing the inner pair
  cout << "   p1.second (Entire Inner Pair): { " << p1.second.first << ", " << p1.second.second << " }\n";

  cout << "   Accessing the '3': p1.second.first\n";
  cout << "   Accessing the '4': p1.second.second\n\n";

  // --- 3. ARRAY OF PAIRS ---
  // Very common in Graph problems!
  cout << "3. ARRAY OF PAIRS\n";
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

  cout << "   Code: pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} };\n";
  cout << "   Visualizing Array:\n";

  for (int i = 0; i < 3; i++)
  {
    cout << "   Index " << i << ": { " << arr[i].first << ", " << arr[i].second << " }\n";
  }

  cout << "\n   Accessing arr[1].second (Element at Index 1, Second value): " << arr[1].second << "\n\n";
}
// Helper function to print a vector nicely
void printVec(string name, vector<int> &vec)
{
  cout << name << ": { ";
  for (auto it : vec)
  {
    cout << it << ", ";
  }
  cout << "} (Size: " << vec.size() << ")\n";
}
void explainVector()
{
  cout << "--- VECTOR EXPLANATION ---\n\n";

  // --- 1. BASICS ---
  cout << "1. CREATION & PUSHING\n";
  vector<int> v; // {}

  v.push_back(1);    // {1}
  v.emplace_back(2); // {1, 2}
  printVec("v", v);

  // --- 2. DIFFERENT CONSTRUCTORS ---
  cout << "\n2. CONSTRUCTORS\n";
  vector<int> v3(5, 100); // {100, 100, 100, 100, 100}
  printVec("v3 (5 instances of 100)", v3);

  vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
  vector<int> v2(v1);    // Copy of v1
  printVec("v2 (Copy of v1)", v2);

  // --- 3. ITERATORS ---
  cout << "\n3. ITERATORS\n";
  // Let's make a fresh vector for this
  vector<int> nums = {10, 20, 30, 40, 50};
  printVec("nums", nums);

  vector<int>::iterator it = nums.begin();
  cout << "   *it (begin): " << *(it) << "\n"; // 10

  it++;
  cout << "   *(it++)    : " << *(it) << "\n"; // 20

  it = it + 2;
  cout << "   *(it + 2)  : " << *(it) << "\n"; // 40

  cout << "   v.back()   : " << nums.back() << "\n"; // 50

  // --- 4. ERASING ---
  cout << "\n4. ERASING\n";
  printVec("nums", nums);

  // Current: {10, 20, 30, 40, 50}

  // Erase 20 (at index 1)
  nums.erase(nums.begin() + 1);
  printVec("After erase nums.(begin + 1)", nums); // {10, 30, 40, 50}

  // Erase range [30, 40] (Indices 1 to 3 exclusive)
  // vector now: {10, 30, 40, 50}
  // We want to remove 30 and 40.
  nums.erase(nums.begin() + 1, nums.begin() + 3);
  printVec("After erase range", nums); // {10, 50}

  // --- 5. INSERTING ---
  cout << "\n5. INSERTING\n";
  vector<int> v4(2, 100); // {100, 100}
  printVec("v4 Start", v4);

  // Insert 300 at the beginning
  v4.insert(v4.begin(), 300);
  printVec("Insert 300 at begin", v4); // {300, 100, 100}

  // Insert two 10s after the 300
  v4.insert(v4.begin() + 1, 2, 10);
  printVec("Insert two 10s", v4); // {300, 10, 10, 100, 100}

  // Copy entire vector 'copy' into v4
  vector<int> copy(2, 50); // {50, 50}
  v4.insert(v4.begin(), copy.begin(), copy.end());
  printVec("Insert another vector at begin", v4);
  // {50, 50, 300, 10, 10, 100, 100}

  // --- 6. UTILS ---
  cout << "\n6. UTILITIES\n";
  cout << "v4 Size: " << v4.size() << "\n";

  v4.pop_back();
  printVec("After pop_back()", v4); // Removes last 100

  // SWAP
  cout << "   -- Swapping v1 and v2 --\n";
  // Let's make them distinct first
  v1.clear();
  v1.push_back(1);
  v1.push_back(2); // {1, 2}
  v2.clear();
  v2.push_back(8);
  v2.push_back(9); // {8, 9}

  printVec("v1 before", v1);
  printVec("v2 before", v2);

  v1.swap(v2);

  printVec("v1 after", v1); // {8, 9}

  v1.clear();
  cout << "Is v1 empty after clear? " << (v1.empty() ? "Yes" : "No") << "\n\n";
}
void explainList()
{
  cout << "--- LIST EXPLANATION ---\n";
  // List = Doubly Linked List
  // Benefit: Insert at FRONT is O(1) (Very fast).
  // Vector insert at front is O(N) (Very slow).

  list<int> ls;

  // --- 1. BACK OPERATIONS ---
  ls.push_back(2);    // {2}
  ls.emplace_back(4); // {2, 4}

  cout << "1. After push_back(2) and (4): ";
  cout << "{ ";
  for (auto it : ls)
    cout << it << " ";
  cout << "}\n";

  // --- 2. FRONT OPERATIONS ---
  ls.push_front(5); // {5, 2, 4} -> 5 added to start instantly

  ls.emplace_front(10); // {10, 5, 2, 4}

  cout << "2. After push_front(5) and (10): ";
  cout << "{ ";
  for (auto it : ls)
    cout << it << " ";
  cout << "}\n";

  // --- 3. KEY DIFFERENCE FROM VECTOR/DEQUE ---
  // ls[2]; // <--- ERROR! You cannot access indices directly in a list.
  // You must iterate to find an element.

  cout << "\n--- ACCESSING ELEMENTS ---\n";
  cout << "Front: " << ls.front() << "\n";
  cout << "Back:  " << ls.back() << "\n";

  // To get the 3rd element, we have to walk there:
  cout << "Walking to 3rd element: ";
  int counter = 0;
  for (auto it : ls)
  {
    if (counter == 2)
    {
      cout << it << " (Found it!)";
      break;
    }
    counter++;
  }
  cout << "\n\n";
}
void explainDeque()
{
  cout << "--- DEQUE EXPLANATION ---\n";
  // Deque = Double Ended Queue
  // Think of it like a Vector, but you can add/remove from the START too.

  deque<int> dq;

  // --- 1. BACK OPERATIONS ---
  dq.push_back(1);    // {1}
  dq.emplace_back(2); // {1, 2}

  cout << "1. After push_back(1) and (2): ";
  cout << "{ ";
  for (auto it : dq)
    cout << it << " ";
  cout << "}\n";

  // --- 2. FRONT OPERATIONS ---
  dq.push_front(4);    // {4, 1, 2} -> 4 goes to the very start
  dq.emplace_front(3); // {3, 4, 1, 2} -> 3 goes before 4

  cout << "2. After push_front(4) and (3): ";
  cout << "{ ";
  for (auto it : dq)
    cout << it << " "; // Iterating is allowed!
  cout << "}\n";

  // --- 3. POP OPERATIONS ---
  cout << "\n--- POPPING ---\n";

  dq.pop_back(); // Removes the last guy (2)
  cout << "3. After pop_back() (2 gone):   ";
  cout << "{ ";
  for (auto it : dq)
    cout << it << " ";
  cout << "}\n";

  dq.pop_front(); // Removes the first guy (3)
  cout << "4. After pop_front() (3 gone):  ";
  cout << "{ ";
  for (auto it : dq)
    cout << it << " ";
  cout << "}\n";

  // --- 4. ACCESS ---
  cout << "\n--- ACCESS ---\n";
  cout << "Front element: " << dq.front() << "\n"; // 4
  cout << "Back element:  " << dq.back() << "\n";  // 1

  // --- 5. VECTOR-LIKE FUNCTIONS ---
  // Just proving it works like a vector
  cout << "\n--- ITERATOR CHECK ---\n";
  cout << "Is empty? " << (dq.empty() ? "Yes" : "No") << "\n";
  cout << "Size: " << dq.size() << "\n";

  cout << "Looping using begin()/end(): ";
  for (auto it = dq.begin(); it != dq.end(); it++)
  {
    cout << *(it) << " ";
  }
  cout << "\n\n";
}
void explainStack()
{
  cout << "--- STACK EXPLANATION ---\n\n";
  // FILO - First In Last Out (LIFO)
  // Imagine a stack of plates. You can only take the top one.

  stack<int> st;
  st.push(1);    // {1}
  st.push(2);    // {2, 1}
  st.push(3);    // {3, 2, 1}
  st.push(3);    // {3, 3, 2, 1} (Changed from 1 to 3 to match your comment)
  st.emplace(5); // {5, 3, 3, 2, 1}

  // --- VISUALIZATION 1: FULL STACK ---
  cout << "1. Stack after pushes (Top is 5):\n";
  cout << "   [TOP] -> ";

  stack<int> copy_st = st; // Create a copy to print without destroying original
  while (!copy_st.empty())
  {
    cout << copy_st.top() << " ";
    copy_st.pop();
  }
  cout << "\n\n";

  // --- OPERATIONS ---
  cout << "2. Checking Top: " << st.top() << "\n"; // prints 5

  st.pop(); // Removes 5. Stack is now {3, 3, 2, 1}
  cout << "3. After st.pop() (5 is removed):\n";

  // --- VISUALIZATION 2: AFTER POP ---
  cout << "   [TOP] -> ";
  copy_st = st; // Refresh copy
  while (!copy_st.empty())
  {
    cout << copy_st.top() << " ";
    copy_st.pop();
  }
  cout << "\n\n";

  cout << "4. Current Size: " << st.size() << "\n"; // 4
  cout << "   Is Empty? : " << (st.empty() ? "Yes" : "No") << "\n\n";

  // --- SWAP EXPLANATION ---
  stack<int> st1, st2;
  st1 = st; // st1 has {3, 3, 2, 1}
  st2.push(100);
  st2.push(200); // st2 has {200, 100}

  cout << "5. Before Swap:\n";
  cout << "   st1 top: " << st1.top() << "\n";
  cout << "   st2 top: " << st2.top() << "\n";

  st1.swap(st2);

  cout << "   --- SWAPPING ---\n";
  cout << "   st1 top is now: " << st1.top() << " (was 200)\n";
  cout << "   st2 top is now: " << st2.top() << " (was 3)\n\n";
}
void explainQueue()
{
  // FIFO - first in first out
  cout << "--- QUEUE EXPLANATION ---\n\n";

  queue<int> q;
  q.push(1);    // {1}
  q.push(2);    // {1, 2}
  q.emplace(4); // {1, 2, 4}

  // --- VISUALIZATION 1 ---
  cout << "1. After pushing 1, 2, 4:\n";
  queue<int> copy_q = q; // Make a copy
  while (!copy_q.empty())
  {
    cout << copy_q.front() << " "; // Print the guy at the front
    copy_q.pop();                  // Remove him to see the next guy
  }
  cout << "\n\n";

  // --- MODIFICATION ---
  q.back() += 5;                                             // The last guy (4) becomes 9
  cout << "2. Modified back (4 += 5): " << q.back() << "\n"; // prints 9
  cout << "   Current Front: " << q.front() << "\n";         // prints 1

  // --- VISUALIZATION 2 ---
  cout << "   Queue is now: ";
  copy_q = q; // Refresh copy
  while (!copy_q.empty())
  {
    cout << copy_q.front() << " ";
    copy_q.pop();
  }
  cout << "\n\n";

  // --- POP OPERATION ---
  q.pop(); // Removes the FRONT element (1)
  cout << "3. After q.pop():\n";
  cout << "   New Front: " << q.front() << "\n"; // prints 2

  // --- VISUALIZATION 3 ---
  cout << "   Final Queue: ";
  copy_q = q; // Refresh copy
  while (!copy_q.empty())
  {
    cout << copy_q.front() << " ";
    copy_q.pop();
  }
  cout << "\n\n";
}
// Helper function to visualize a Max Priority Queue
// We pass by value 'pq' here so it creates a copy automatically.
// This allows us to pop and print without destroying the original in main.
void printMaxPQ(string message, priority_queue<int> pq)
{
  cout << message << "\n   [TOP] -> ";
  if (pq.empty())
  {
    cout << "(Empty)\n\n";
    return;
  }

  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << "\n\n";
}

void explainPQ()
{
  cout << "--- PRIORITY QUEUE (PQ) EXPLANATION ---\n";
  cout << "Note: Data is not stored linearly. It is a Heap Tree.\n";
  cout << "Max Heap (Default): Largest element is always at Top.\n\n";
  cout << "Time Complexity of:\nPush: Log(n)\nTop: O(1)\nPop: Log(n)\n\n";

  priority_queue<int> pq;

  // --- 1. PUSHING ELEMENTS ---
  pq.push(5); // {5}
  printMaxPQ("1. After pushing 5:", pq);

  pq.push(2); // {5, 2} (5 is still max)
  printMaxPQ("2. After pushing 2 (5 > 2, so 5 stays top):", pq);

  pq.push(8); // {8, 5, 2} (8 is new max!)
  printMaxPQ("3. After pushing 8 (8 > 5, so 8 jumps to top!):", pq);

  pq.emplace(10); // {10, 8, 5, 2}
  printMaxPQ("4. After emplace(10) (10 is huge, jumps to top):", pq);

  // --- 2. ACCESS & MODIFICATION ---
  cout << "--- OPERATIONS ---\n";
  cout << "Current Top: " << pq.top() << "\n"; // 10
  cout << "Size: " << pq.size() << "\n";

  pq.pop(); // Removes the Top (10)
  cout << "Pop executed. (10 removed)\n\n";

  printMaxPQ("5. PQ after pop (Next max, 8, becomes top):", pq);

  // --- 3. MIN HEAP (Minimum Element at Top) ---
  cout << "--- MIN HEAP EXPLANATION ---\n";
  cout << "Syntax: priority_queue<int, vector<int>, greater<int>>\n";

  // This weird syntax tells C++ to flip the logic
  priority_queue<int, vector<int>, greater<int>> min_pq;

  min_pq.push(5);
  min_pq.push(2); // 2 is smaller than 5, so 2 goes to TOP!
  min_pq.push(8);
  min_pq.emplace(10);

  cout << "6. Min Heap Elements (Smallest comes out first):\n";
  cout << "   [TOP] -> ";

  // We have to manually print loop here because helper function
  // expects a normal (Max) priority_queue
  while (!min_pq.empty())
  {
    cout << min_pq.top() << " ";
    min_pq.pop();
  }
  cout << "\n\n";

  /*
     Why can't we loop normally?

     priority_queue is a Container Adapter.
     It does NOT have iterators (begin/end).
     It only exposes the TOP element.

     Wrong:  for(auto it : pq) { ... }
     Right:  while(!pq.empty()) { cout << pq.top(); pq.pop(); }
  */
}
void explainSet(){

  cout << "Everything in sorted and unique order";
  set<int> st;
  st.insert(1); // {1}
  st.emplace(2); // {1, 2}
  st.insert(2); // {1, 2}
  st.insert(4); // {1, 2, 4}
  st.insert(3); // {1, 2, 3, 4}

  // Functionalities of insert in vector
  // can be used also, that only increase  efficiency

  // begin(), end(), rbegin(), rend(), size(),
  // empty() and swap() are same as those of above

  // {1, 2, 3, 4, 5}
  auto it = st.find(3);

  // {1, 2, 3, 4, 5}
  auto it = st.find(6);

  // {1, 4, 5}
  st.erase(5); // erase 5 // takes logarithmic time

  int cnt = st.count(1);

  auto it = st.find(3);
}

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int choice;

  do
  {
    // 1. Clear screen (Optional: clean start every time)
    // system("clear");

    // 2. Print Menu
    cout << "\n==========================\n";
    cout << "   STL LEARNING MENU      \n";
    cout << "==========================\n";
    cout << "1. Pair\n";
    cout << "2. Vector\n";
    cout << "3. List\n";
    cout << "4. Deque\n";
    cout << "5. Stack\n";
    cout << "6. Queue\n";
    cout << "7. Priority Queue\n";
    cout << "0. Exit\n";
    cout << "==========================\n";
    cout << "Enter your choice: ";

    cin >> choice;

    // Check if input failed (e.g. user entered a letter)
    if (cin.fail())
    {
      cin.clear();            // reset error flags
      cin.ignore(1000, '\n'); // throw away bad input
      choice = -1;            // force default case
    }

    cout << "\n\n"; // Space before output

    switch (choice)
    {
    case 1:
      explainPair();
      break;
    case 2:
      explainVector();
      break;
    case 3:
      explainList();
      break;
    case 4:
      explainDeque();
      break;
    case 5:
      explainStack();
      break;
    case 6:
      explainQueue();
      break;
    case 7:
      explainPQ();
      break;
    case 0:
      cout << "Exiting...\n";
      break;
    default:
      cout << "Invalid choice!\n";
    }

    if (choice != 0)
    {
      cout << "\nPress Enter to continue...";

      // We need two lines here because 'cin >> choice' leaves a newline in the buffer
      cin.ignore();
      cin.get();

      // Clears the terminal so the menu stays at the top
      // Use "cls" if running in standard Windows CMD
      // Use "clear" since you are in Git Bash
      system("clear");
    }

  } while (choice != 0);

  return 0;
}
