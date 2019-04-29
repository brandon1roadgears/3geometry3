#include "TESTgeometry.h"
float getarea(float r)
{
    float pl;
    pl = p * r * r;
    return pl;
}

TEST_CASE("GETAREA", "[AREA]") {
  REQUIRE(getarea(1) == 3.14159f);
  REQUIRE(getarea(2) == 12.5664f);
  REQUIRE(getarea(3) == 28.2743f);
  REQUIRE(getarea(4) == 50.2655f);
  REQUIRE(getarea(5) == 78.5398f);
  REQUIRE(getarea(10) == 314.159f);
  REQUIRE(getarea(15) == 706.858f);
  cout << "Test getarea" << endl;
}
