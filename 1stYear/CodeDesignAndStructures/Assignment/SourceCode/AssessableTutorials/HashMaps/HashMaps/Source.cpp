// HashMaps.cpp : Defines the entry point for the console application.
//
#include "HashMap.h"
#include <iostream>
#include <string>

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

//struct my_complex_Type
//{
//	std::string str;
//	int blah;
//};

///complex hash
//template<>
//unsigned int calculate_Hash(const my_complex_Type& value)
//{
//	int first_hash = calculate_Hash(value str);
//	int second_hash = calculate_Hash(value blah);
//
//	return (first_hash + second_hash);
//}

///cassert
int main(int argc, char* argv[])
{
	int result = Catch::Session().run(argc, argv);

	system("PAUSE");

    return 0;
}
