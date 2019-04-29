#include "TESTgeometry.h"
float getperim(float r)
{
    float pr;
    pr = 2 * p * r;
    return pr;
}

TEST_CASE("GETPERIM", "[PERIM]") {
  REQUIRE(getperim(1.19) == 7.47699);
  REQUIRE(getperim(1.25) == 7.85398);
  REQUIRE(getperim(3.1) == 19.4779);
  REQUIRE(getperim(4.96) == 31.1646);
  REQUIRE(getperim(5.65) == 35.5);
  REQUIRE(getperim(55.55) == 349.031);
  REQUIRE(getperim(94.22) == 592.002);
  cout << "Test getarea" << endl;
}
