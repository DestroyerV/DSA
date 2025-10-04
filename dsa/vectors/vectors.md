# vector

vector ia a dynamic array provided by the Standard Template library **(STL)** that can grow and shrink in size.

## Declaration

```cpp
#include <vector>
using namespace std;

vector<int> v; // Empty vector of integers
vector<double> v2(10) // Vector of doubles, initialized to 0
vector<string> v3{"hello", "world"} // Vector of strings
```

## Adding Elements

```cpp
v1.push_back(1);
v1.push_back(2);
```

## Accessing Elements

```cpp
int x = v1[0];          // Access the first element
int y = v1.at(1);       // Access the second element
```

## Size and Capacity

```cpp
std::cout << "Size: " << v1.size() << std::endl; //element in vector
std::cout << "Capacity: " << v1.capacity() << std::endl; // size of allocated memory
```

## Removing Elements

```cpp
v1.pop_back();          // Removes the last element
v1.erase(v1.begin());   // Removes the first element
```

## Memory Allocation

Memory for the Array is allocated at the compile time that's why arrays can not expand and shrink in size and also arrays are stored in **stacks** memory. While vector is allocated while runtime it is stored in **heap** memory.

Every Time when the size of vector is not enough to add more elements in it and you try to add an element the the size of the vector becomes double.

```cpp
v1.push_back(0);
```
