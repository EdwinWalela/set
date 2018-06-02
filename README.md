# C++ Set 
Introducing a modified C++ array with extra methods

## Usage
-locate `set.h` in termproject folder
-copy it to same directory as your main source file(.cpp)
- add `#include "set.h"` 

## Declaring a new set

`Set<type,size>`

## Set methods

### `.size()`
returns the size of the set as an integer

### `.push(value)`
add an element to the set
takes in a single parameter(set type)

### `.at(index)`
returns element at specified index(parameter)

### `.pop()`
removes last element in set

### `.find(element)`
returns 1 if element is present and 0 if element does not exist

## example

```cpp
  //Declare new set (type,size)
	Set<int, 10> mySet;

	//find size of set
	std::cout << "Size: " << mySet.size()<<std::endl;

	for (unsigned int i = 0; i < mySet.size(); i++) {
		mySet.push(i); // add elements to set
	}

	std::cout << "Element at index(3): " << mySet.at(3)<<std::endl;// display element at an defined index

	mySet.pop(); // remove last element from set

	// search if an element exists in set
	if (mySet.find(81)) { 
		std::cout << 8 << " is present in set"<<std::endl;
	}
	else {
		std::cout << "Element not found!"<<std::endl;
	}
  ```
