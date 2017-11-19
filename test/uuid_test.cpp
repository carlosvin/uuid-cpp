/*
 * uuid.cpp
 *      Author: carlos
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "Uuid.h"
#include "catch.hpp"
#include <string>

constexpr int MAX_ITERS = 100;

TEST_CASE( "Uuid", "[uuid]" ) {
  for (int i=0; i<MAX_ITERS; i++) {
    ids::Uuid uuid;
    std::string uuid_str {uuid.to_str()};

    INFO(uuid_str);
    REQUIRE(uuid_str.size() == 36);
    CHECK(uuid.most > 0);
    CHECK(uuid.least > 0);
  }
}

// BDD style

SCENARIO( "UUID creation", "[Uuid]" ) {
  
  ids::Uuid uuid;
  std::string uuid_str {uuid.to_str()};

  GIVEN( "A random UUID " + uuid_str) {
    REQUIRE(uuid_str.size() == 36);

	  WHEN( "get the most and least" ) {
		  THEN( "should be more than 0" ) {
			  CHECK( uuid.most > 0);
			  CHECK( uuid.least > 0);
		  }
	  }
  }  
}
