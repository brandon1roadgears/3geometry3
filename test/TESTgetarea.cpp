#include "geometry.h"
float getarea(float r)
{
    float pl;
    pl = p * r * r;
    return pl;
}

TEST_CASE("GETAREA", "[AREA]") {
  REQUIRE(getarea(1) == 3.14159);
  REQUIRE(getarea(2) == 12.5664);
  REQUIRE(getarea(3) == 28.2743);
  REQUIRE(getarea(4) == 50.2655);
  REQUIRE(getarea(5) == 78.5398);
  REQUIRE(getarea(10) == 314.159);
  REQUIRE(getarea(15) == 706.858);
  cout << "Test getarea" << endl;
}
