#include <catch2/catch_test_macros.hpp>
#include <iostream>

#include "extract_max.h"

using namespace std;

// the syntax for defining a test is below. It is important for the name to be unique, but you can group multiple tests with [tags]. A test can have [multiple][tags] using that syntax.
TEST_CASE("Example Test Name - Change me!", "[flag]"){
	// instantiate any class members that you need to test here
	int one = 1;

	// anything that evaluates to false in a REQUIRE block will result in a failing test 
	REQUIRE(one == 0); // fix me!

	// all REQUIRE blocks must evaluate to true for the whole test to pass
	REQUIRE(false); // also fix me!
}

TEST_CASE("Test 2", "[flag]"){
	// you can also use "sections" to share setup code between tests, for example:
	int one = 1;

	SECTION("num is 2") {
		int num = one + 1;
		REQUIRE(num == 2);
	};

	SECTION("num is 3") {
		int num = one + 2;
		REQUIRE(num == 3);
	};

	// each section runs the setup code independently to ensure that they don't affect each other
}

// the provided tests from edugator are below. Note that you must determine the correct output for the [output_hidden] tests yourself

TEST_CASE("Function: extractMax 1", "[output_visible]") {
    int input[] = {9, 8, 7};
    int size = 3;
    int expectedOutput[] = {8, 7};
    int* output = extractMax(input, size);
    for(int i = 0; i < size - 1; i++)
        REQUIRE(expectedOutput[i] == output[i]);
}

TEST_CASE("Function: extractMax 2", "[output_visible]") {
    int input[] = {9, 8, 7, 6};
    int size = 4;
    int expectedOutput[] = {8, 6, 7};
    int* output = extractMax(input, size);
    for(int i = 0; i < size - 1; i++)
        REQUIRE(expectedOutput[i] == output[i]);
}

// TEST_CASE("Function: extractMax 3", "[output_hidden]") {
//      int input[] = {3, 1};
//     int size = 2;
//     int expectedOutput[] = {1};
//     int* output = extractMax(input, size);
//     for(int i = 0; i < size - 1; i++)
//          REQUIRE(expectedOutput[i] == output[i]);
// }
