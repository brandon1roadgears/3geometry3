#include "geometry.h"
float getperim(float r)
{
    float pr;
    pr = 2 * p * r;
    return pr;
}

TEST_CASE("GETPERIM", "[PERIM]") {
  REQUIRE(getarea(1) == 6.28319);
  REQUIRE(getarea(2) == 12.5664);
  REQUIRE(getarea(3) == 18.8496);
  REQUIRE(getarea(4) == 25.1327);
  REQUIRE(getarea(5) == 31.4159);
  REQUIRE(getarea(10) == 62.8319);
  REQUIRE(getarea(15) == 94.2478);
  cout << "Test getarea" << endl;
}
