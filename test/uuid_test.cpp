#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "Uuid.h"
#include <string>

constexpr int MAX_ITERS = 100;

TEST_CASE("Uuid")
{
  for (int i = 0; i < MAX_ITERS; i++)
  {
    ids::Uuid uuid;
    std::string uuid_str{uuid.to_str()};

    INFO(uuid_str);

    // If assertion fails test execution is stopped
    REQUIRE(uuid_str.size() == 36);

    // If assertion fails test execution continues
    CHECK(uuid.most > 0);
    CHECK(uuid.least > 0);
  }
}

// BDD style

SCENARIO("UUID creation")
{

  GIVEN("A random UUID ")
  {

    ids::Uuid uuid;
    std::string uuid_str{uuid.to_str()};

    REQUIRE(uuid_str.size() == 36);

    WHEN("get the most and least")
    {
      THEN("should be more than 0")
      {
        CHECK(uuid.most > 0);
        CHECK(uuid.least > 0);
      }
    }
  }
}
