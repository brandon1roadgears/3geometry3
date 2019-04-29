#include "TESTgeometry.h"
float getarea(float r)
{
    float pl;
    pl = p * r * r;
    return pl;
}

TEST_CASE("GETAREA", "[AREA]") {
  REQUIRE(getarea(2.2) == 15.20531);
  REQUIRE(getarea(6.11) == 117.282);
  REQUIRE(getarea(4.21) == 55.6819);
  REQUIRE(getarea(8.98) == 253.339);
  REQUIRE(getarea(7.01) == 154.378);
  REQUIRE(getarea(10.10) == 320.474);
  cout << "Test getarea is done" << endl;
}
