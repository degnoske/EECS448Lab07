

/**
*	@author Dylan Egnoske
*/

#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "LinkedList.h"
#include <string>
#include <vector>


class test
{
	public:
    LinkedList<int>*  tLinkedList;

		test();
		~test();

		bool testIsEmpty();

		bool testSize();

		bool testSearch();

		bool testAddBack();

		bool testAddFront();

		bool testRemoveBack();

		bool testRemoveFront();



};

#endif
