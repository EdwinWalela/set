// termproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "set.h"


int main()
{
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


	system("pause");
}

