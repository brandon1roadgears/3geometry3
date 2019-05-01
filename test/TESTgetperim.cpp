#include "TESTgeometry.h"
float getperim(float r)
{
    float pr;
    pr = 2 * p * r;
    return pr;
}

TEST_CASE("GETPERIM", "[PERIM]") {
  REQUIRE(getperim(3.3) == 20.73451f);
  REQUIRE(getperim(6.11) == 38.3903f);
  REQUIRE(getperim(4.21)  == 26.4522f);
  REQUIRE(getperim(8.98) == 56.423f);
  REQUIRE(getperim(7.01) == 44.0451f);
  REQUIRE(getperim(10.10) == 63.4602f);
  cout << "Test getperim is done" << endl;
}
