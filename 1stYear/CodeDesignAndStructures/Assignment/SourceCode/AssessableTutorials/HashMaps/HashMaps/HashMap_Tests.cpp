#include "catch.hpp"
#include <cassert>
#include "HashMap.h"
#include <iostream>

TEST_CASE("Create base hashmap", "[HashMap]") 
{
	std::cout << "===============================================================================" << std::endl;
	std::cout << "Create base hashmap and test count" << std::endl;
	std::cout << "===============================================================================" << std::endl;
	HashMap<1024, std::string, int> map;	

	REQUIRE(map.Count() == 0);
	std::cout << "map should be empty" << std::endl;
	std::cout << map.Count() << std::endl;
	map.add("matt", 423);
	map.add("James", 490);
	map.add("karley", 630);

	std::cout << "map should contain 3" << std::endl;
	std::cout << map.Count() << std::endl;
	REQUIRE(map.Count() == 3);
}

///clear
TEST_CASE("clear hashmap", "[HashMap]")
{
	std::cout << "===============================================================================" << std::endl;
	std::cout << "clear" << std::endl;
	std::cout << "===============================================================================" << std::endl;
	HashMap<1024, std::string, int> map;

	REQUIRE(map.Count() == 0);
	std::cout << "map should be empty" << std::endl;
	std::cout << map.Count() << std::endl;
	map.add("matt", 423);
	map.add("James", 490);
	map.add("karley", 630);

	std::cout << "map should contain 3" << std::endl;
	std::cout << map.Count() << std::endl;
	REQUIRE(map.Count() == 3);

	map.clear();

	std::cout << "map should be empty" << std::endl;
	std::cout << map.Count() << std::endl;
	REQUIRE(map.Count() == 0);
}

///access
TEST_CASE("Access hashmap", "[HashMap]")
{
	std::cout << "===============================================================================" << std::endl;
	std::cout << "Access Hashmap" << std::endl;
	std::cout << "===============================================================================" << std::endl;
	HashMap<1024, std::string, int> map;

	REQUIRE(map.Count() == 0);
	std::cout << "map should be empty" << std::endl;
	std::cout << map.Count() << std::endl;

	map.add("matt", 423);
	map.add("Bob", 490);
	map.add("karley", 630);

	std::cout << "searching for matt at 423" << std::endl;
	REQUIRE(map.Access("matt") == 423);

	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "searching for Bob at anything but 423" << std::endl;
	REQUIRE(map.Access("Bob") != 423);
	std::cout << "------------------------------------------------------------------------------" << std::endl;
}

///remove
TEST_CASE("remove a value", "[HashMap]")
{
	std::cout << "===============================================================================" << std::endl;
	std::cout << "Remove entry" << std::endl;
	std::cout << "===============================================================================" << std::endl;
	HashMap<1024, std::string, int> map;

	REQUIRE(map.Count() == 0);
	std::cout << "map should be empty" << std::endl;
	std::cout << map.Count() << std::endl;
	map.add("matt", 423);
	map.add("James", 490);
	map.add("karley", 630);

	std::cout << "map should contain 3" << std::endl;
	std::cout << map.Count() << std::endl;
	REQUIRE(map.Count() == 3);

	map.destroy("James");
	std::cout << "map should contain 2" << std::endl;
	std::cout << map.Count() << std::endl;
	REQUIRE(map.Count() == 2);
}
