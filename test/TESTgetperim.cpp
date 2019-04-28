getperim#include "geometry.h"
float getperim(float r)
{
    float pr;
    pr = 2 * p * r;
    return pr;
}

TEST_CASE("GETPERIM", "[PERIM]") {
  REQUIRE(getperim(1) == 6.28319);
  REQUIRE(getperim(2) == 12.5664);
  REQUIRE(getperim(3) == 18.8496);
  REQUIRE(getperim(4) == 25.1327);
  REQUIRE(getperim(5) == 31.4159);
  REQUIRE(getperim(10) == 62.8319);
  REQUIRE(getperim(15) == 94.2478);
  cout << "Test getarea" << endl;
}
