#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
const float p = 3.14159265;
extern float getarea(float r);
extern float getperim(float r);
extern int inter(float d, float r1, float r2, int x1, int x2, int y1, int y2, int flag);
