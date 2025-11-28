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
void printMaxPQ(string message, priority_queue<int> pq)
{
  // We pass by value 'pq' here so it creates a copy automatically.
  // This allows us to pop and print without destroying the original in main.
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

// Helper to print a set
void printSet(string msg, set<int> &st)
{
  cout << msg << ": { ";
  for (auto it : st)
  {
    cout << it << " ";
  }
  cout << "} (Size: " << st.size() << ")\n";
}
void explainSet()
{
  cout << "--- SET EXPLANATION ---\n";
  cout << "Key Rules: 1. Unique Elements Only  2. Always Sorted\n\n";

  set<int> st;

  // --- 1. INSERTION ---
  cout << "1. INSERTION\n";
  st.insert(1);  // {1}
  st.emplace(2); // {1, 2}
  st.insert(4);  // {1, 2, 4}
  st.insert(3);  // {1, 2, 3, 4} <-- Notice it auto-sorts!

  printSet("After inserting 1, 2, 4, 3", st);

  st.insert(2); // Try to insert duplicate
  st.insert(4); // Try to insert duplicate
  printSet("After trying to insert 2 and 4 again (No change)", st);

  // --- 2. SEARCHING (find) ---
  cout << "\n2. SEARCHING (find)\n";
  // Current: {1, 2, 3, 4}

  auto it = st.find(3);
  if (it != st.end())
  {
    cout << "   st.find(3): Found! Value is " << *it << "\n";
  }
  else
  {
    cout << "   st.find(3): Not Found\n";
  }

  auto itMissing = st.find(6);
  if (itMissing == st.end())
  {
    cout << "   st.find(6): Not Found (Returns st.end())\n";
  }

  // --- 3. COUNT ---
  cout << "\n3. COUNT (0 or 1)\n";
  // Since set is unique, count is always 1 (present) or 0 (absent).
  cout << "   st.count(1): " << st.count(1) << "\n";
  cout << "   st.count(6): " << st.count(6) << "\n";

  // --- 4. ERASING ---
  cout << "\n4. ERASING\n";
  // Let's add 5 to make it {1, 2, 3, 4, 5}
  st.insert(5);
  printSet("Setup for erase", st);

  // Method A: Erase by Value
  st.erase(5);
  printSet("After st.erase(5)", st); // {1, 2, 3, 4}

  // Method B: Erase by Iterator
  auto itDelete = st.find(3);
  if (itDelete != st.end())
  {
    st.erase(itDelete);
  }
  printSet("After erasing iterator pointing to 3", st); // {1, 2, 4}

  // Method C: Erase Range [First, Last)
  // Current: {1, 2, 4}. Let's add more to demonstrate range.
  st.insert(5);
  st.insert(6);
  st.insert(7);
  printSet("Refilled set", st); // {1, 2, 4, 5, 6, 7}

  auto itStart = st.find(2); // Points to 2
  auto itEnd = st.find(5);   // Points to 5

  // Deletes from 2 up to (but not including) 5.
  // Should delete 2 and 4.
  st.erase(itStart, itEnd);
  printSet("After erase range [2, 5)", st); // {1, 5, 6, 7}

  // --- 5. LOWER/UPPER BOUND ---
  cout << "\n5. LOWER_BOUND & UPPER_BOUND\n";
  // Current: {1, 5, 6, 7}

  // lower_bound(x): Iterator to first element >= x
  auto lb = st.lower_bound(5);
  cout << "   lower_bound(5) (>= 5): " << *lb << "\n"; // 5

  auto lb2 = st.lower_bound(2);                         // 2 is missing, next biggest is 5
  cout << "   lower_bound(2) (>= 2): " << *lb2 << "\n"; // 5

  // upper_bound(x): Iterator to first element > x (Strictly greater)
  auto ub = st.upper_bound(5);
  cout << "   upper_bound(5) (> 5):  " << *ub << "\n"; // 6

  cout << "\n";
}

// Helper to print a MultiSet
void printMS(string msg, multiset<int> &ms)
{
  cout << msg << ": { ";
  for (auto it : ms)
    cout << it << " ";
  cout << "} (Size: " << ms.size() << ")\n";
}
void explainMultiSet()
{
  cout << "--- MULTISET EXPLANATION ---\n";
  cout << "Rules: 1. Sorted  2. ALLOWS Duplicates\n\n";

  multiset<int> ms;

  // --- 1. INSERTION ---
  cout << "1. INSERTION\n";
  ms.insert(1); // {1}
  ms.insert(1); // {1, 1}
  ms.insert(1); // {1, 1, 1}
  ms.insert(2); // {1, 1, 1, 2}

  printMS("After inserting 1, 1, 1, 2", ms);

  cout << "   Count of 1: " << ms.count(1) << "\n";

  // --- 2. ERASING BY VALUE (The "Nuke" Option) ---
  cout << "\n2. ERASING BY VALUE\n";
  // If we use ms.erase(1), it erases ALL instances of 1.

  multiset<int> temp = ms; // Make a copy to demo this
  temp.erase(1);
  printMS("ms.erase(1) (Removes ALL 1s)", temp); // {2}

  // --- 3. ERASING BY ITERATOR (The "Snipe" Option) ---
  cout << "\n3. ERASING BY ITERATOR\n";
  // If we want to remove ONLY ONE '1', we must use find() first.
  // find() returns the iterator to the FIRST occurrence of 1.

  auto it = ms.find(1);
  ms.erase(it);

  printMS("ms.erase(ms.find(1)) (Removes single 1)", ms); // {1, 1, 2}

  // --- 4. ERASING A RANGE ---
  cout << "\n4. ERASING A RANGE\n";
  // Let's refill the set to make it interesting
  ms.clear();
  ms.insert(10);
  ms.insert(10);
  ms.insert(10);
  ms.insert(20);
  printMS("Refilled Set", ms); // {10, 10, 10, 20}

  // We want to remove the first two '10's.
  // ERROR: ms.find(10) + 2  <-- INVALID in Sets! Cannot jump memory.
  // CORRECT: Use std::advance or next()

  auto startIt = ms.find(10); // Points to 1st 10

  auto endIt = startIt;
  std::advance(endIt, 2); // Move iterator forward by 2 steps manually
  // Now endIt points to the 3rd 10.

  // Range erase is [start, end) -> Excludes 'end'
  ms.erase(startIt, endIt);

  printMS("After erasing range of first two elements", ms); // {10, 20}

  cout << "\n";
}

// Helper to print a UnorderedSet
void printUSet(string msg, unordered_set<int> &st)
{
  cout << msg << ": { ";
  for (auto it : st)
  {
    cout << it << " ";
  }
  cout << "} (Size: " << st.size() << ")\n";
}
void explainUSet()
{
  cout << "--- UNORDERED SET EXPLANATION ---\n";
  cout << "Rules: 1. Unique Elements  2. NO ORDER (Random/Hashed)\n";
  cout << "Benefit: O(1) Insert/Search (Avg Case). Faster than Set O(log N).\n\n";

  unordered_set<int> st;

  // --- 1. INSERTION ---
  cout << "1. INSERTION\n";
  // In a normal set, these would be sorted {1, 2, 3}.
  // Here, they could be {3, 1, 2} or {1, 3, 2}...
  st.insert(1);
  st.insert(2);
  st.insert(3);
  st.insert(1); // Duplicate ignored

  // Notice the output order is unpredictable!
  printUSet("After inserting 1, 2, 3, 1", st);

  // --- 2. SEARCHING ---
  cout << "\n2. SEARCHING\n";
  // Works exactly the same as Set, just faster (usually).

  auto it = st.find(2);
  if (it != st.end())
  {
    cout << "   Found 2!\n";
  }
  else
  {
    cout << "   2 Not Found.\n";
  }

  // --- 3. MISSING FUNCTIONS ---
  cout << "\n3. WHAT IS MISSING?\n";
  cout << "   st.lower_bound(2); // ERROR! Does not exist.\n";
  cout << "   st.upper_bound(2); // ERROR! Does not exist.\n";
  cout << "   Why? Because the data is not sorted, so 'next greater' makes no sense.\n";

  // --- 4. COLLISIONS (Theory) ---
  cout << "\n4. PERFORMANCE NOTE\n";
  cout << "   Avg Time: O(1) (Constant)\n";
  cout << "   Worst Case: O(N) (Linear) - Happens if 'Hash Collisions' occur.\n";
  cout << "   (This is rare in competitive programming but possible).\n\n";
}

// Helper to print a simple map<int, int>
void printMap(string msg, map<int, int> &mpp)
{
  cout << msg << ": {\n";
  for (auto it : mpp)
  {
    cout << "   Key: " << it.first << " -> Value: " << it.second << "\n";
  }
  cout << "} (Size: " << mpp.size() << ")\n";
}
void explainMap()
{
  cout << "--- MAP EXPLANATION ---\n";
  cout << "Rules: 1. Key-Value Pairs  2. Keys are Unique & Sorted\n\n";

  // --- 1. BASIC MAP <int, int> ---
  cout << "1. BASIC INSERTION\n";
  map<int, int> mpp;

  // Method A: Array Syntax (Most Common)
  mpp[1] = 2; // Key 1, Value 2

  // Method B: Emplace
  mpp.emplace(3, 1); // Key 3, Value 1

  // Method C: Insert Pair
  mpp.insert({2, 4}); // Key 2, Value 4

  // Note: Maps sort automatically by KEY!
  // Input order was 1, 3, 2. Storage order will be 1, 2, 3.
  printMap("After inserting keys 1, 3, 2", mpp);

  // --- 2. SPECIAL MAP TYPES ---
  cout << "\n2. COMPLEX KEYS\n";
  // map<pair<int, int>, int> means the KEY is a pair {x, y}
  map<pair<int, int>, int> mppComplex;

  mppComplex[{2, 3}] = 10;
  cout << "   Inserted Key {2,3} with Value 10.\n";
  cout << "   Accessing mppComplex[{2,3}]: " << mppComplex[{2, 3}] << "\n";

  // --- 3. ACCESS & THE '[]' TRAP ---
  cout << "\n3. ACCESS BEHAVIOR\n";
  // Current mpp: {1->2, 2->4, 3->1}

  cout << "   mpp[1]: " << mpp[1] << " (Exists)\n";

  // What happens if we access a key that DOES NOT EXIST?
  // map automatically CREATES it with a default value (0).
  cout << "   mpp[5]: " << mpp[5] << " (Did not exist, so created with val 0)\n";

  printMap("mpp after accessing mpp[5]", mpp);

  // --- 4. FIND (Safe Access) ---
  cout << "\n4. FIND FUNCTION\n";

  auto it = mpp.find(3); // Search for Key 3
  if (it != mpp.end())
  {
    // it is a pointer to a pair {key, value}
    cout << "   Found Key 3! Value is: " << it->second << "\n";
  }

  auto itMissing = mpp.find(99);
  if (itMissing == mpp.end())
  {
    cout << "   Key 99 not found.\n";
  }

  // --- 5. LOWER/UPPER BOUND ---
  cout << "\n5. LOWER & UPPER BOUND\n";
  // Current Keys: {1, 2, 3, 5}

  // lower_bound(x): First element with Key >= x
  auto lb = mpp.lower_bound(2);
  cout << "   lower_bound(2) (Key >= 2): Key " << lb->first << " -> Val " << lb->second << "\n";

  // upper_bound(x): First element with Key > x
  auto ub = mpp.upper_bound(2);
  cout << "   upper_bound(2) (Key > 2):  Key " << ub->first << " -> Val " << ub->second << "\n";

  cout << "\n";
}

// Helper to print a multimap
void printMMap(string msg, multimap<int, string> &mpp)
{
  cout << msg << ": {\n";
  for (auto it : mpp)
  {
    cout << "   Key: " << it.first << " -> Value: " << it.second << "\n";
  }
  cout << "} (Size: " << mpp.size() << ")\n";
}
void explainMultiMap()
{
  cout << "--- MULTIMAP EXPLANATION ---\n";
  cout << "Rules: 1. Sorted Keys  2. DUPLICATE Keys Allowed\n";
  cout << "Note: mpp[key] is INVALID here.\n\n";

  // Using <int, string> to make duplicates easier to see
  multimap<int, string> mpp;

  // --- 1. INSERTION ---
  cout << "1. INSERTION\n";
  mpp.insert({1, "Apple"});
  mpp.insert({1, "Apricot"}); // Duplicate Key 1
  mpp.insert({2, "Banana"});
  mpp.insert({1, "Avocado"}); // Another Key 1

  // Keys will be sorted: 1, 1, 1, 2
  printMMap("After inserting 3 duplicate keys (1)", mpp);

  // --- 2. COUNT & FIND ---
  cout << "\n2. SEARCHING\n";
  cout << "   Count of Key 1: " << mpp.count(1) << "\n";

  // find() returns an iterator to the FIRST instance of the key
  auto it = mpp.find(1);
  if (it != mpp.end())
  {
    cout << "   find(1) found first instance: " << it->second << " (Apple)\n";
  }

  // --- 3. ERASING ---
  cout << "\n3. ERASING\n";

  // Scenario A: Delete ONE specific entry
  // Let's delete the first '1' (Apple) found above
  mpp.erase(it);
  printMMap("After erasing iterator to first '1'", mpp);

  // Scenario B: Delete ALL keys of a certain value
  mpp.erase(1);
  printMMap("After mpp.erase(1) (Nukes all remaining 1s)", mpp);

  // Only Banana (2) remains.

  cout << "\n";
}

// Helper to print an unordered map
void printUMap(string msg, unordered_map<int, string> &mpp)
{
  cout << msg << ": {\n";
  for (auto it : mpp)
  {
    cout << "   Key: " << it.first << " -> Value: " << it.second << "\n";
  }
  cout << "} (Size: " << mpp.size() << ")\n";
}
void explainUnorderedMap()
{
  cout << "--- UNORDERED MAP EXPLANATION ---\n";
  cout << "Rules: 1. Unique Keys  2. NO ORDER (Hashed)  3. O(1) Speed\n\n";

  unordered_map<int, string> mpp;

  // --- 1. INSERTION & ORDER ---
  cout << "1. INSERTION (Notice the randomness)\n";

  mpp[1] = "Apple";
  mpp[2] = "Banana";
  mpp[3] = "Cherry";
  mpp[10] = "Date";
  mpp[5] = "Elderberry";

  // In a normal 'map', these would be printed: 1, 2, 3, 5, 10.
  // Here, they will be jumbled based on their Hash value.
  printUMap("After inserting 1, 2, 3, 10, 5", mpp);

  // --- 2. ACCESS & UPDATE ---
  cout << "\n2. ACCESS & UPDATE\n";
  cout << "   mpp[2]: " << mpp[2] << "\n";

  mpp[2] = "Blueberry"; // Update works exactly the same
  cout << "   mpp[2] updated: " << mpp[2] << "\n";

  // --- 3. MISSING FUNCTIONS ---
  cout << "\n3. WHAT IS MISSING?\n";
  cout << "   mpp.lower_bound(2); // ERROR! Keys aren't sorted.\n";
  cout << "   mpp.upper_bound(2); // ERROR! Keys aren't sorted.\n";

  // --- 4. WHEN TO USE? ---
  cout << "\n4. PRO TIP\n";
  cout << "   ALWAYS use unordered_map first.\n";
  cout << "   It is O(1) (constant time).\n";
  cout << "   Only switch to 'map' if you get Time Limit Exceeded (TLE)\n";
  cout << "   due to collisions, or if you specifically need Sorted Keys.\n\n";
}

// --- CUSTOM COMPARATOR ---
// Logic: Sort by 2nd element (Ascending).
// If 2nd elements are equal, sort by 1st element (Descending).
bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second < p2.second)
    return true; // p1 comes before p2
  if (p1.second > p2.second)
    return false; // p1 comes after p2

  // If we reach here, p1.second == p2.second (Tie)
  // We want larger first element to come first (Descending)
  if (p1.first > p2.first)
    return true;

  return false;
}
void explainExtra()
{
  cout << "--- ALGORITHMS & MATH EXPLANATION ---\n\n";

  // --- 1. SORTING ARRAYS & VECTORS ---
  cout << "1. SORTING\n";
  int a[] = {5, 2, 9, 1, 5, 6};
  int n = 6; // Size of array

  cout << "   Original Array: ";
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << "\n";

  // Sort entire array
  sort(a, a + n);
  cout << "   After sort(a, a+n): ";
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << "\n";

  // Sort Descending
  sort(a, a + n, greater<int>());
  cout << "   After greater<int>: ";
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << "\n\n";

  // --- 2. CUSTOM COMPARATOR ---
  cout << "2. CUSTOM COMPARATOR (The Tricky Part)\n";
  // Scenario: Sort by 2nd element. If tied, pick larger 1st element.
  // {1,2}, {2,1}, {4,1}
  pair<int, int> pairs[] = {{1, 2}, {2, 1}, {4, 1}};
  int pair_n = 3;

  cout << "   Original Pairs:  {1,2}, {2,1}, {4,1}\n";

  sort(pairs, pairs + pair_n, comp);

  cout << "   Sorted Pairs:    ";
  for (int i = 0; i < pair_n; i++)
  {
    cout << "{" << pairs[i].first << "," << pairs[i].second << "} ";
  }
  cout << "\n   (Notice {4,1} comes before {2,1} because 4 > 2)\n\n";

  // --- 3. BUILTIN POPCOUNT (Bit Manipulation) ---
  cout << "3. BIT MANIPULATION (__builtin_popcount)\n";
  // Counts how many '1's are in the binary representation.

  int num = 7; // Binary: 111
  int cnt = __builtin_popcount(num);
  cout << "   Num: 7 (Binary 111) -> Set Bits: " << cnt << "\n";

  long long bigNum = 165786578687;
  // MUST use 'll' at the end for long long
  int cntLL = __builtin_popcountll(bigNum);
  cout << "   Big Num: " << bigNum << " -> Set Bits: " << cntLL << "\n\n";

  // --- 4. NEXT PERMUTATION ---
  cout << "4. NEXT PERMUTATION\n";
  string s = "123";

  // Important: String must be sorted first to get ALL permutations
  sort(s.begin(), s.end());

  cout << "   All permutations of 123:\n";
  do
  {
    cout << "   " << s << "\n";
  } while (next_permutation(s.begin(), s.end()));
  cout << "\n";

  // --- 5. MAX ELEMENT ---
  cout << "5. MAX / MIN ELEMENT\n";
  // Array a is currently sorted descending: {9, 6, 5, 5, 2, 1}

  // *max_element returns a POINTER (iterator). We use * to get value.
  int maxi = *max_element(a, a + n);
  int mini = *min_element(a, a + n);

  cout << "   Max Element in array a: " << maxi << "\n";
  cout << "   Min Element in array a: " << mini << "\n\n";
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
    cout << "8. Set\n";
    cout << "9. MultiSet\n";
    cout << "10. UnorderedSet\n";
    cout << "11. Map\n";
    cout << "12. MultiMap\n";
    cout << "13. UnorederedMap\n";
    cout << "14. Algorithm\n";
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
    case 8:
      explainSet();
      break;
    case 9:
      explainMultiSet();
      break;
    case 10:
      explainUSet();
    case 11:
      explainMap();
      break;
    case 12:
      explainMultiMap();
      break;
    case 13:
      explainUnorderedMap();
      break;
    case 14:
    explainExtra();
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
