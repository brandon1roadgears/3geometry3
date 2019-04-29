#include "TESTgeometry.h"
int inter(float d, float r1, float r2, int x1, int x2, int y1, int y2, int flag)
{
    if ((r1 < r2 || r2 < r1) && x1 == x2 && y1 == y2) {
        flag = 0;
    } else if (r1 == r2 && x1 == x2 && y1 == y2) {
        flag = 1;
    }
    if (d + r1 < r2) {
        flag = 0;
    } else if (((d + r1) == r2) || d + r1 > r2) {
        flag = 1;
    }
    if (d > r1 + r2) {
        flag = 1;
    } else if ((d == r1 + r2) || d < (r1 + r2)) {
        flag = 1;
    }
    return flag;
}
TEST_CASE("INTER", "[I]") {
  REQUIRE(inter(1,1,2,3,4,5,6,0) == 1);
  REQUIRE(inter(2,4,6,8,10,1,1,0) == 1);
  REQUIRE(inter(1,1,1,1,1,1,1,1) == 1);
  REQUIRE(inter(0,0,0,0,0,0,0,0) == 1);
  REQUIRE(inter(15,1,2,3,4,5,6,0) == 1);
  REQUIRE(inter(2,7,40,1,2,3,4,0) == 1);
  REQUIRE(inter(15,7,8,11,99,12,99,0) == 1);
  cout << "Test inter" << endl;
}
