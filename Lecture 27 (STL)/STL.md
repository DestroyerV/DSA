# STL (Standard Template Library)

The Standard Template Library (STL) in C++ is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks. It is a library of container classes, algorithms, and iterators.

STL has four components:

1. **Containers**: Data structures like arrays, linked lists, stacks, queues, and others that store data.
2. **Iterators**: Objects that enable a programmer to traverse through the elements of a container.
3. **Algorithms**: A collection of functions for various operations like searching, sorting, and manipulating data.
4. **Functions**: Function objects or functor that allow functions to be passed as arguments.

STL provides a standardized way to work with data structures and algorithms, making code more reusable and easier to understand.

## Containers

### Vector

#### Declaration

```cpp
vector<int> vec; // empty vector
vector<int> vec = {1,2,3};
vector<int> vec(3,10); // make vector of 10 element each of 3
vector<int> vec2(vec); // make vec2 exactly as vec.
```

#### Functions

**I. size( ):** return the number of element in the vector.

```cpp
vector<int> vec = {1,2,3};
vec.size(); //3
```

**II. capacity( ):**  returns the number of elements that the vector can hold before it needs to allocate more memory. This is different from .size(), which returns the number of elements currently in the vector. The capacity is always greater than or equal to the size.

```cpp
vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);

cout << "Size: " << vec.size() << endl;       // Output: Size: 3
cout << "Capacity: " << vec.capacity() << endl; // Output: Capacity: 4 (or more, depending on implementation)
```

**III. push_back( ):** The push_back function adds a new element to the end of the vector. If the vector's capacity is not enough to accommodate the new element, the vector will automatically allocate more memory. Each time the capacity get double.

```cpp
vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
for (int i : vec) {
        cout << i << " "; // Output: 1 2 3
    }
```

**IV. pop_back( ):** The pop_back function removes the last element from the vector. It does not return the removed element.

```cpp
vector<int> vec = {1, 2, 3};
    vec.pop_back(); // Removes the last element (3)

    for (int i : vec) {
        cout << i << " "; // Output: 1 2
    }
```

**V. emplace_back( ):** The emplace_back function constructs a new element in place at the end of the vector. This can be more efficient than push_back because it avoids an extra copy or move operation.

```cpp
vector<std::string> vec;
vec.emplace_back("Hello");
vec.emplace_back("World");

for (const auto& str : vec) {
    cout << str << " "; // Output: Hello World
}
```

**VI. at( ) or [ ]** The at function provides access to the element at a specified position with bounds checking. If the position is out of range, it throws an std::out_of_range exception.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};
    try {
        std::cout << vec.at(1) << std::endl; // Output: 2
        std::cout << vec.at(2) << std::endl; // Output: 3
        std::cout << vec.at(3) << std::endl; // Throws std::out_of_range
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range error: " << e.what() << std::endl;
    }

    return 0;
}
```

**VI. front( ):** The front function returns a reference to the first element in the vector. It does not perform bounds checking, so the vector must not be empty when calling this function.

```cpp
vector<int> vec = {1, 2, 3};
cout << vec.front() << std::endl; // Output: 1
```

**VII. back( ):** The back function returns a reference to the last element in the vector. Similar to front, it does not perform bounds checking, so the vector must not be empty when calling this function.

```cpp
vector<int> vec = {1, 2, 3};
cout << vec.back() << std::endl; // Output: 3
```

**VIII. erase( ):** The erase function removes elements from the vector. It can remove a single element or a range of elements.

```cpp
vector<int> vec = {1, 2, 3, 4, 5};
vec.erase(vec.begin() + 2); // Removes the element at index 2 (value 3)

for (int i : vec) {
    cout << i << " "; // Output: 1 2 4 5
}
```

**IX. insert( ):** The insert function inserts elements into the vector at a specified position. It can insert a single element, multiple elements, or elements from another range.

```cpp
vector<int> vec = {1, 2, 4, 5};
vec.insert(vec.begin() + 2, 3); // Inserts 3 at index 2

for (int i : vec) {
    cout << i << " "; // Output: 1 2 3 4 5
    }
```

**X. clear( ):** The clear function removes all elements from the vector, leaving it empty.

```cpp
vector<int> vec = {1, 2, 3, 4, 5};
vec.clear(); // Removes all elements

cout << "Size after clear: " << vec.size() << std::endl; // Output: Size after clear: 0
```

**XI. empty( ):** The empty function checks whether the vector is empty. It returns true if the vector has no elements, and false otherwise.

```cpp
vector<int> vec;
cout << "Is vector empty? " << boolalpha << vec.empty() << endl; // Output: Is vector empty? true

vec.push_back(1);
cout << "Is vector empty? " << boolalpha << vec.empty() << endl; // Output: Is vector empty? false
```

---

### Iterators in Vector

Iterators in `vector` are objects that allow you to traverse the elements of the vector. They act like pointers and provide a way to access and manipulate elements in the vector. Iterators are essential for working with the Standard Template Library (STL) algorithms.

#### Types of Iterators

1. begin ( ): Returns an iterator to the first element.
2. end ( ): Returns an iterator to the element following the last element.
3. rbegin ( ): Returns a reverse iterator to the last element.
4. rend ( ): Returns a reverse iterator to the element preceding the first element.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Using begin() and end() to iterate through the vector
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it << " "; // Output: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Using rbegin() and rend() to iterate through the vector in reverse
    for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        std::cout << *rit << " "; // Output: 5 4 3 2 1
    }
    std::cout << std::endl;

    return 0;
}
```

---

### List

In C++, `list` is a container provided by the Standard Template Library (STL) that implements a `doubly linked list`. This means that each element in the list contains a link to the previous and next elements, allowing for efficient insertion and deletion of elements at both ends and in the middle of the list.

#### Key Features of `list`

- **Dynamic Size:** The size of the list can grow or shrink dynamically as elements are added or removed.
- **Non-contiguous Storage:** Elements are not stored in contiguous memory locations, unlike `vector`.
- **Efficient Insertions/Deletions:** Inserting or deleting elements is efficient, especially in the middle of the list, as it only involves updating pointers.
- **Bidirectional Iteration:** Supports bidirectional iterators, allowing traversal in both forward and backward directions.

#### Common Operations in List

- **push_back:** Adds an element to the end of the list.
- **push_front:** Adds an element to the beginning of the list.
- **pop_back:** Removes the last element from the list.
- **pop_front:** Removes the first element from the list.
- **insert:** Inserts elements at a specified position.
- **erase:** Removes elements from a specified position or range.
- **size:** Returns the number of elements in the list.
- **empty:** Checks if the list is empty.
- **clear:** Removes all elements from the list.

```cpp
#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    // Adding elements
    myList.push_back(1);
    myList.push_back(2);
    myList.push_front(0);

    // Iterating through the list
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " "; // Output: 0 1 2
    }
    std::cout << std::endl;

    // Removing elements
    myList.pop_front(); // Removes 0
    myList.pop_back();  // Removes 2

    // Checking size and emptiness
    std::cout << "Size: " << myList.size() << std::endl; // Output: Size: 1
    std::cout << "Is empty: " << std::boolalpha << myList.empty() << std::endl; // Output: Is empty: false

    return 0;
}
```

---

### Deque

In C++, `deque` (double-ended queue) is a sequence container provided by the Standard Template Library (STL) that allows fast insertion and deletion of elements at both the beginning and the end. It is implemented as a dynamic array of fixed-size arrays, which provides efficient random access to elements.

#### Key Features of `deque`

- **Dynamic Size:** The size of the deque can grow or shrink dynamically as elements are added or removed.
- **Efficient Insertions/Deletions:** Allows efficient insertion and deletion of elements at both the front and the back.
- **Random Access:** Provides constant-time access to elements using the subscript operator ([ ]).
- **Bidirectional Iteration:** Supports bidirectional iterators, allowing traversal in both forward and backward directions.

#### Common Operations in deque

- **push_back:** Adds an element to the end of the deque.
- **push_front:** Adds an element to the beginning of the deque.
- **pop_back:** Removes the last element from the deque.
- **pop_front:** Removes the first element from the deque.
- **insert:** Inserts elements at a specified position.
- **erase:** Removes elements from a specified position or range.
- **size:** Returns the number of elements in the deque.
- **empty:** Checks if the deque is empty.
- **clear:** Removes all elements from the deque.
- **operator[ ]:** Provides random access to elements.

```cpp
#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    // Adding elements
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_front(0);

    // Iterating through the deque
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " "; // Output: 0 1 2
    }
    std::cout << std::endl;

    // Accessing elements using operator[]
    std::cout << "Element at index 1: " << myDeque[1] << std::endl; // Output: Element at index 1: 1

    // Removing elements
    myDeque.pop_front(); // Removes 0
    myDeque.pop_back();  // Removes 2

    // Checking size and emptiness
    std::cout << "Size: " << myDeque.size() << std::endl; // Output: Size: 1
    std::cout << "Is empty: " << std::boolalpha << myDeque.empty() << std::endl; // Output: Is empty: false

    return 0;
}
```

---

### Pair

In C++, `pair` is a utility provided by the Standard Template Library (STL) that allows you to store two heterogeneous objects as a single unit. It is particularly useful for returning two values from a function or for storing key-value pairs in associative containers like `map`.

#### Key Features of `pair`

- **Heterogeneous Storage:** Can store two objects of different types.
- **Member Variables:** The two objects are accessed through the public member variables first and second.
- **Comparison Operators:** Supports comparison operators (==, !=, <, <=, >, >=) to compare pairs lexicographically.

#### Common Operations in pair

- **Initialization:** Can be initialized using the constructor, `make_pair`, or aggregate initialization.
- **Access:** Access the elements using the first and second member variables.

```cpp
#include <iostream>
#include <utility> // For std::pair and std::make_pair

int main() {
    // Initializing a pair using the constructor
    std::pair<int, std::string> p1(1, "one");

    // Initializing a pair using std::make_pair
    std::pair<int, std::string> p2 = std::make_pair(2, "two");

    // Accessing elements
    std::cout << "p1: " << p1.first << ", " << p1.second << std::endl; // Output: p1: 1, one
    std::cout << "p2: " << p2.first << ", " << p2.second << std::endl; // Output: p2: 2, two

    // Comparing pairs
    if (p1 < p2) {
        std::cout << "p1 is less than p2" << std::endl; // Output: p1 is less than p2
    }

    // Nested pairs 
    std::pair<int, pair<char, int>> p = {1, {'a', 3}};

    std::cout << p.second.second << endl;

    // Pairs in vector
    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};

    vec.push_back({4, 5}); //insert
    vec.emplace_back(4, 5); //in-place object create

    for(pair<int, int> p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
```

---

### Stack

In C++ STL, a stack is a container adapter that gives the programmer the functionality of a stack - specifically, a `LIFO` (Last In, First Out) data structure. It allows you to add elements to the top of the stack and remove elements from the top of the stack.

#### Common Operations of stack

- **push():** Adds an element to the top of the stack.

- **pop():** Removes the top element from the stack.

- **top():** Returns the top element of the stack.

- **empty():** Checks if the stack is empty.

- **size():** Returns the number of elements in the stack.

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    // Push elements onto the stack
    s.push(1);
    s.push(2);
    s.push(3);

    // Display the top element
    std::cout << "Top element: " << s.top() << std::endl;

    // Pop an element from the stack
    s.pop();

    // Display the top element after pop
    std::cout << "Top element after pop: " << s.top() << std::endl;

    // Check if the stack is empty
    if (s.empty()) {
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "Stack is not empty" << std::endl;
    }

    return 0;
}
```

---

### Queue

In C++ STL, a queue is a container adapter that provides a `FIFO` (First In, First Out) data structure. It allows you to add elements to the back of the queue and remove elements from the front of the queue.

### Common Operations of queue

- **push():** Adds an element to the back of the queue.

- **pop():**Removes the front element from the queue.

- **front()**: Returns the front element of the queue.

- **back():** Returns the back element of the queue.

- **empty()**: Checks if the queue is empty.

- **size():** Returns the number of elements in the queue.

```cpp
#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Push elements onto the queue
    q.push(1);
    q.push(2);
    q.push(3);

    // Display the front element
    std::cout << "Front element: " << q.front() << std::endl;

    // Pop an element from the queue
    q.pop();

    // Display the front element after pop
    std::cout << "Front element after pop: " << q.front() << std::endl;

    // Check if the queue is empty
    if (q.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }

    return 0;
}
```

---

### Priority Queue

In C++ STL, a priority queue is a container adapter that provides a way to maintain a collection of elements such that the element with the highest priority is always at the front. By default, the priority is determined by the `std::less comparator`, meaning the largest element is given the highest priority `(max-heap)`. However, you can customize the comparator to create a `min-heap` or other priority schemes.

#### Common Operations of priority queue

- **push():** Adds an element to the priority queue. O(log n)

- **pop():**Removes the element with the highest priority. O(log n)

- **top():**Returns the element with the highest priority. O(1)

- **empty():** Checks if the priority queue is empty.

- **size():** Returns the number of elements in the priority queue.

```cpp
#include <iostream>
#include <queue>
#include <vector>

int main() {
    // Max-heap (default)
    std::priority_queue<int> pq;

    // Push elements onto the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    // Display the top element
    std::cout << "Top element: " << pq.top() << std::endl;

    // Pop an element from the priority queue
    pq.pop();

    // Display the top element after pop
    std::cout << "Top element after pop: " << pq.top() << std::endl;

    // Check if the priority queue is empty
    if (pq.empty()) {
        std::cout << "Priority queue is empty" << std::endl;
    } else {
        std::cout << "Priority queue is not empty" << std::endl;
    }

    return 0;
}
```

### Map

In C++ STL, a map is an associative container that stores elements in key-value pairs. It is implemented as a balanced binary tree (usually a Red-Black Tree), which means that the elements are stored in sorted order based on the keys. Each key in a map is unique, and it allows for fast retrieval of values based on the keys.

#### Common Operations of map

- **insert():** Adds a key-value pair to the map.

- **erase():** Removes a key-value pair from the map by key.

- **find():** Searches for an element by key and returns an iterator to it.

- **operator[]:** Accesses the value associated with a key.

- **begin():** Returns an iterator to the first element in the map.

- **end():** Returns an iterator to the element following the last element in the map.

- **size():** Returns the number of elements in the map.

- **empty():** Checks if the map is empty.

```cpp
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> m;

    // Insert elements into the map
    m.insert({1, "one"});
    m.insert({2, "two"});
    m.insert({3, "three"});

    // Access elements using the key
    std::cout << "Key 1: " << m[1] << std::endl;
    std::cout << "Key 2: " << m[2] << std::endl;

    // Find an element by key
    auto it = m.find(3);
    if (it != m.end()) {
        std::cout << "Found key 3: " << it->second << std::endl;
    } else {
        std::cout << "Key 3 not found" << std::endl;
    }

    // Erase an element by key
    m.erase(2);

    // Check if the map is empty
    if (m.empty()) {
        std::cout << "Map is empty" << std::endl;
    } else {
        std::cout << "Map is not empty" << std::endl;
    }

    // Iterate over the map
    for (const auto& pair : m) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
```

---

### Unordered map

An unordered_map is an associative container that stores elements in key-value pairs with unique keys. It is implemented using a hash table, which means that the elements are not stored in any particular order, but it allows for average-case constant time complexity for insertions, deletions, and lookups.

### Multi Map

A multimap is similar to a map, but it allows multiple elements with the same key. It is implemented as a balanced binary tree (usually a Red-Black Tree), which means that the elements are stored in sorted order based on the keys.

#### Operations of multi map

- **count():** Returns the number of elements with a specific key.

- **equal_range():** Returns a range of elements with a specific key.

```cpp
#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm;

    // Insert elements into the multimap
    mm.insert({1, "one"});
    mm.insert({2, "two"});
    mm.insert({2, "deux"});
    mm.insert({3, "three"});

    // Iterate over the multimap
    for (const auto& pair : mm) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
```

---

### Set

In C++ STL, a set is an associative container that stores unique elements in a specific order. It is implemented as a balanced binary tree (usually a Red-Black Tree), which means that the elements are stored in sorted order based on the values.

#### Operation of set

- **insert():** Adds an element to the set.

- **erase():** Removes an element from the set by value.

- **find():** Searches for an element by value and returns an iterator to it.

- **count():** Returns the number of elements with a specific value (always 0 or 1 for set).

- **begin():** Returns an iterator to the first element in the set.

- **end():** Returns an iterator to the element following the last element in the set.

- **size():** Returns the number of elements in the set.

- **empty():** Checks if the set is empty.

```cpp
#include <iostream>
#include <set>

int main() {
    std::set<int> s;

    // Insert elements into the set
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); // Duplicate elements are not added

    // Iterate over the set
    for (const int& value : s) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Find an element by value
    auto it = s.find(20);
    if (it != s.end()) {
        std::cout << "Found 20" << std::endl;
    } else {
        std::cout << "20 not found" << std::endl;
    }

    // Erase an element by value
    s.erase(20);

    // Check if the set is empty
    if (s.empty()) {
        std::cout << "Set is empty" << std::endl;
    } else {
        std::cout << "Set is not empty" << std::endl;
    }

    return 0;
}
```

---

### Lower Bound and Upper Bound

In C++ STL, lower_bound and upper_bound are functions that work with sorted containers like vector, set, and map. They are used to find the positions of elements in a sorted range.

#### lower_bound

The lower_bound function returns an iterator pointing to the first element that is not less than (i.e., greater than or equal to) a given value. If all elements in the range are less than the given value, it returns an iterator to the end of the range.

#### upper_bound

The upper_bound function returns an iterator pointing to the first element that is greater than a given value. If no elements in the range are greater than the given value, it returns an iterator to the end of the range.

```cpp
#include <iostream>
#include <set>

int main() {
    std::set<int> s = {10, 20, 30, 40, 50};

    // Find lower bound
    auto lb = s.lower_bound(30);
    if (lb != s.end()) {
        std::cout << "Lower bound of 30: " << *lb << std::endl;
    } else {
        std::cout << "30 not found" << std::endl;
    }

    // Find upper bound
    auto ub = s.upper_bound(30);
    if (ub != s.end()) {
        std::cout << "Upper bound of 30: " << *ub << std::endl;
    } else {
        std::cout << "No element greater than 30" << std::endl;
    }

    return 0;
}
```

---

### Unordered set

An unordered_set is an associative container that stores unique elements in no particular order. It is implemented using a hash table, which means that the elements are not stored in any specific order, but it allows for average-case constant time complexity for insertions, deletions, and lookups.

### Multi set

A multi set is similar to a set, but it allows multiple elements with the same value. It is implemented as a balanced binary tree (usually a Red-Black Tree), which means that the elements are stored in sorted order based on the values.

---

## Algorithms

### Sorting

In C++ STL, the sort algorithm is used to sort elements in a range. It is defined in the `<algorithm>` header and can be used to sort elements in containers like vector, array, and other sequences.

#### Syntax

```cpp
#include <algorithm>

std::sort(start_iterator, end_iterator); //ascending
std::sort(start_iterator, end_iterator, comparator); //descending
```

#### Parameters

- **start_iterator:** An iterator pointing to the beginning of the range to be sorted.

- **end_iterator:** An iterator pointing to the end of the range to be sorted (one past the last element).

- **comparator (optional):** A binary function that defines the sorting criterion. If not provided, the elements are sorted in ascending order using the < operator.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 2, 9, 1, 5, 6};

    // Sort in ascending order
    std::sort(vec.begin(), vec.end());

    std::cout << "Sorted in ascending order: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort in descending order using a comparator
    std::sort(vec.begin(), vec.end(), std::greater<int>());

    std::cout << "Sorted in descending order: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

#### Custom Comparator

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool customComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    std::vector<std::pair<int, int>> vec = {{1, 4}, {2, 3}, {3, 2}, {4, 1}};

    // Sort using custom comparator
    std::sort(vec.begin(), vec.end(), customComparator);

    std::cout << "Sorted by second element: ";
    for (const auto& p : vec) {
        std::cout << "{" << p.first << ", " << p.second << "} ";
    }
    std::cout << std::endl;

    return 0;
}
```

- It is efficient with an average time complexity of O(N log N).

---

### Reverse

The reverse algorithm reverses the order of elements in a range.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Reverse the vector
    std::reverse(vec.begin(), vec.end());

    std::cout << "Reversed vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

---

### Next Permutation

The next_permutation algorithm transforms the range into the next lexicographically greater permutation. If no such permutation exists, it transforms the range into the smallest permutation (sorted in ascending order).

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3};

    // Generate the next permutation
    std::next_permutation(vec.begin(), vec.end());

    std::cout << "Next permutation: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

---

### Swap

The swap algorithm exchanges the values of two variables.

```cpp
#include <iostream>
#include <utility>

int main() {
    int a = 10, b = 20;

    // Swap the values of a and b
    std::swap(a, b);

    std::cout << "a: " << a << ", b: " << b << std::endl;

    return 0;
}
```

---

### Min and Max

The min and max algorithms return the smallest and largest of two values, respectively.

```cpp
#include <iostream>
#include <algorithm>

int main() {
    int a = 10, b = 20;

    // Find the minimum and maximum of a and b
    int minimum = std::min(a, b);
    int maximum = std::max(a, b);

    std::cout << "min: " << minimum << ", max: " << maximum << std::endl;

    return 0;
}
```
