#include "geometry.h"
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
