#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.hpp"

TEST_CASE("Vowel Cases") {
  CHECK(piglatinify("accoustics") == "accousticsay");
  CHECK(piglatinify("apologize")  == "apologizeay");
}

TEST_CASE("General Cases") {
  CHECK(piglatinify("congratulate") == "ongratulatecay");
  CHECK(piglatinify("laborer") == "aborerlay");
  CHECK(piglatinify("stray") == "traysay");
}
