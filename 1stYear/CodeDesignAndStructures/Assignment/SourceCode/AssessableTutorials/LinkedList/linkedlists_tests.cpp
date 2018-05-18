#include "catch.hpp"

#include "LinkedList.h"
#include <iostream>

TEST_CASE("New Linked List", "[LinkedList]") {

	LinkedList demoLinkedList;
	REQUIRE(demoLinkedList.count() == 0);

}

TEST_CASE("pushBack( value ) – add a new value to the end of the list", "[LinkedList]") 
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "pushback" << std::endl;
	std::cout << "--------------------------------" << std::endl;

	LinkedList demoLinkedList;
	demoLinkedList.pushBack(7);
	std::cout << "added node with data: 7" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushBack(15);
	std::cout << "added node with data: 15" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushBack(12);
	std::cout << "added node with data: 12" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushBack(1);
	std::cout << "added node with data: 1" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushBack(5);
	std::cout << "added node with data: 5" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushBack(9);
	std::cout << "added node with data: 9" << std::endl;
	demoLinkedList.Print();
	REQUIRE(demoLinkedList.count() == 6);
	std::cout << "--------------------------------" << std::endl;
}

TEST_CASE("pushFront( value ) – add a new value to the front of the list", "[LinkedList]")
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "pushfront" << std::endl;
	std::cout << "--------------------------------" << std::endl;

	LinkedList demoLinkedList;
	demoLinkedList.pushFront(7);
	std::cout << "added node with data: 7" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushFront(15);
	std::cout << "added node with data: 15" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushFront(12);
	std::cout << "added node with data: 12" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushFront(1);
	std::cout << "added node with data: 1" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushFront(5);
	std::cout << "added node with data: 5" << std::endl;
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushFront(9);
	std::cout << "added node with data: 9" << std::endl;
	demoLinkedList.Print();
	REQUIRE(demoLinkedList.count() == 6);
	std::cout << "--------------------------------" << std::endl;
}

//insert(Iterator, value) – add a new value one - past the specified iterator location

//begin() – return an iterator to the first element

//end() – return an iterator to a null element

//first() – return the first element by value, assert if no elements

TEST_CASE("first() – return the first element by value, assert if no elements", "[LinkedList]")
{
	///*
	//crash test
	{
		std::cout << std::endl;
		std::cout << "--------------------------------" << std::endl;
		std::cout << "first" << std::endl;
		std::cout << "--------------------------------" << std::endl;
		LinkedList demoLinkedList;
		std::cout << "first value '" << demoLinkedList.first() << "' should crash" << std::endl;
	}
	/*

	//standard test
	{
		std::cout << std::endl;
		std::cout << "--------------------------------" << std::endl;
		std::cout << "first" << std::endl;
		std::cout << "--------------------------------" << std::endl;
		LinkedList demoLinkedList;
		demoLinkedList.pushBack(7);
		demoLinkedList.pushBack(15);
		demoLinkedList.pushBack(12);
		demoLinkedList.pushBack(1);
		demoLinkedList.pushBack(5);
		demoLinkedList.pushBack(9);
		demoLinkedList.Print();
		std::cout << "first value '" << demoLinkedList.first() << "' Should be 7" << std::endl;
		REQUIRE(demoLinkedList.first() == 7);
		std::cout << "--------------------------------" << std::endl;
	}
	*/
}

TEST_CASE("last() – return the last element by value, assert if no elements", "[LinkedList]")
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "last" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	LinkedList demoLinkedList;
	demoLinkedList.pushBack(7);
	demoLinkedList.pushBack(15);
	demoLinkedList.pushBack(12);
	demoLinkedList.pushBack(1);
	demoLinkedList.pushBack(5);
	demoLinkedList.pushBack(9);
	demoLinkedList.Print();
	std::cout << "last value '" << demoLinkedList.last() << "' Should be 9" << std::endl;
	REQUIRE(demoLinkedList.last() == 9);
	std::cout << "--------------------------------" << std::endl;
}

TEST_CASE("count() – return how many elements exist in the list", "[LinkedList]")
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Count" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	LinkedList demoLinkedList;
	REQUIRE(demoLinkedList.count() == 0);
	demoLinkedList.pushBack(7);
	REQUIRE(demoLinkedList.count() == 1);
	demoLinkedList.pushBack(15);
	REQUIRE(demoLinkedList.count() == 2);
	demoLinkedList.pushBack(12);
	REQUIRE(demoLinkedList.count() == 3);
	demoLinkedList.pushBack(1);
	REQUIRE(demoLinkedList.count() == 4);
	demoLinkedList.pushBack(5);
	REQUIRE(demoLinkedList.count() == 5);
	demoLinkedList.pushBack(9);
	REQUIRE(demoLinkedList.count() == 6);
	demoLinkedList.Print();
	std::cout << "current count is: '" << demoLinkedList.count() << "' Should be 6" << std::endl;
	std::cout << "--------------------------------" << std::endl;
}

//erase(iterator) – remove an element by its iterator

TEST_CASE("remove(value) – remove all elements with matching value", "[LinkedList]")
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Remove (remove 5th node, data: 5)" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	LinkedList demoLinkedList;
	demoLinkedList.pushBack(7);
	demoLinkedList.pushBack(15);
	demoLinkedList.pushBack(12);
	demoLinkedList.pushBack(1);
	demoLinkedList.pushBack(5);
	demoLinkedList.pushBack(9);
	demoLinkedList.Print();
	REQUIRE(demoLinkedList.count() == 6);
	std::cout << "--------------------------------" << std::endl;
	std::cout << "remove 5th node, data: 5" << std::endl;
	demoLinkedList.remove(5);
	demoLinkedList.Print();
	REQUIRE(demoLinkedList.count() == 5);
	std::cout << "--------------------------------" << std::endl;
}

TEST_CASE("popBack() – remove the last element", "[LinkedList]") 
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "popBack" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	LinkedList demoLinkedList;
	demoLinkedList.pushBack(7);
	demoLinkedList.pushBack(15);
	demoLinkedList.pushBack(12);
	demoLinkedList.pushBack(1);
	demoLinkedList.pushBack(5);
	demoLinkedList.pushBack(9);
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "current count is: '" << demoLinkedList.count() << "' Should be 6" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.popBack();
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "pop front initiated, current count is: '" << demoLinkedList.count() << "' Should be 5" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	REQUIRE(demoLinkedList.count() == 5);
}

TEST_CASE("popFront() – remove the first element", "[LinkedList]")
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "popFront" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	LinkedList demoLinkedList;
	demoLinkedList.pushBack(7);
	demoLinkedList.pushBack(15);
	demoLinkedList.pushBack(12);
	demoLinkedList.pushBack(1);
	demoLinkedList.pushBack(5);
	demoLinkedList.pushBack(9);
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "current count is: '" << demoLinkedList.count() << "' Should be 6" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.popFront();
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "pop front initiated, current count is: '" << demoLinkedList.count() << "' Should be 5" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	REQUIRE(demoLinkedList.count() == 5);
}

TEST_CASE("empty() – return a Boolean, true if the list is empty, false otherwise", "[LinkedList]")
{
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Empty" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	LinkedList demoLinkedList;
	std::cout << "list is empty" << std::endl;
	std::cout << demoLinkedList.empty() << std::endl;
	REQUIRE(demoLinkedList.empty() == true);
	std::cout << "--------------------------------" << std::endl;
	demoLinkedList.pushBack(7);
	std::cout << "list has 1 node" << std::endl;
	std::cout << demoLinkedList.empty() << std::endl;
	REQUIRE(demoLinkedList.empty() == false);
	std::cout << "--------------------------------" << std::endl;
}

TEST_CASE("clear() – remove all elements from the list", "[LinkedList]")
{
	std::cout << "--------------------------------" << std::endl;
	std::cout << "clear" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	LinkedList demoLinkedList;
	demoLinkedList.pushBack(7);
	demoLinkedList.pushBack(15);
	demoLinkedList.pushBack(12);
	demoLinkedList.pushBack(1);
	demoLinkedList.pushBack(5);
	demoLinkedList.pushBack(9);
	demoLinkedList.Print();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "current count is: '" << demoLinkedList.count() << "' Should be 6" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	REQUIRE(demoLinkedList.count() == 6);
	demoLinkedList.clear();
	std::cout << "--------------------------------" << std::endl;
	std::cout << "List is: '" << demoLinkedList.empty() << "' Should be 1 (empty ran. 1 = true, 0 = false)" << std::endl;
	std::cout << "--------------------------------" << std::endl;

}