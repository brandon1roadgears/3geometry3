#include "TESTgeometry.h"
float getarea(float r)
{
    float pl;
    pl = p * r * r;
    return pl;
}

TEST_CASE("GETAREA", "[AREA]") {
  REQUIRE(getarea(2.2) == 15.20531f);
  REQUIRE(getarea(6.11) == 117.28226f);
  REQUIRE(getarea(4.21) == 55.6819f);
  REQUIRE(getarea(8.98) == 253.339f);
  REQUIRE(getarea(7.01) == 154.378f);
  REQUIRE(getarea(10.10) == 320.474f);
  cout << "Test getarea is done" << endl;
}
