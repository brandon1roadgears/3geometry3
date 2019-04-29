#include "TESTgeometry.h"
float getperim(float r)
{
    float pr;
    pr = 2 * p * r;
    return pr;
}

TEST_CASE("GETPERIM", "[PERIM]") {
  REQUIRE(getperim(1.5) == 9.42478);
  REQUIRE(getperim(2.2) == 13.823);
  REQUIRE(getperim(6.11) == 38.3903);
  REQUIRE(getperim(4.21)  == 26.4522);
  REQUIRE(getperim(8.98) == 56.423);
  REQUIRE(getperim(7.01) == 44.0451);
  REQUIRE(getperim(10.10) == 63.4602);
  cout << "Test getperim is done" << endl;
}
