#include "catch.hpp"

#include "LinkedList.h"

TEST_CASE("New Linked List", "[LinkedList]") {

	LinkedList demoLinkedList;
	REQUIRE(demoLinkedList.count() == 0);

}

TEST_CASE("add a new value to the end of the list", "[LinkedList]") 
{
	LinkedList demoLinkedList;
	REQUIRE(demoLinkedList.count() == 0);
	demoLinkedList.pushBack(7);
	REQUIRE(demoLinkedList.last() == 7)
	demoLinkedList.pushBack(15);
	demoLinkedList.pushBack(12);
	demoLinkedList.pushBack(1);
	demoLinkedList.pushBack(5);
	demoLinkedList.pushBack(9);
	REQUIRE(demoLinkedList.count() == 6);
}

//pushFront( value ) – add a new value to the front of the list

//insert(Iterator, value) – add a new value one - past the specified iterator location

//begin() – return an iterator to the first element

//end() – return an iterator to a null element

//first() – return the first element by value, assert if no elements
//
//last() – return the last element by value, assert if no elements
//
//count() – return how many elements exist in the list
//
//erase(iterator) – remove an element by its iterator
//
//remove(value) – remove all elements with matching value
//
//popBack() – remove the last element
//
//popFront() – remove the first element
//
//empty() – return a Boolean, true if the list is empty, false otherwise
//
//clear() – remove all elements from the list