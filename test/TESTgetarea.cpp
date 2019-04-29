#include "TESTgeometry.h"
float getarea(float r)
{
    float pl;
    pl = p * r * r;
    return pl;
}

TEST_CASE("GETAREA", "[AREA]") {
  REQUIRE(getarea(1.1) == 3.80133);
  REQUIRE(getarea(1.95) == 11.9459);
  REQUIRE(getarea(3.99) == 50.0145);
  REQUIRE(getarea(4.4) == 60.8212);
  REQUIRE(getarea(55.1) == 9537.91);
  REQUIRE(getarea(64.71) == 13155.1);
  REQUIRE(getarea(15.15) == 721.066);
  cout << "Test getarea" << endl;
}
