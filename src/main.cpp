#include "geometry.h"
int main()
{
	int x1, y1, x2, y2;
	float r1, r2, d, flag = 0, S1, S2, perim1, perim2;
	cout << "Input x1, y1, r1:" << endl;
		cin >> x1 >> y1 >> r1;
	cout << endl;
	perim1 = getperim(r1);
	s1 = getarea(r1);
	cout << "Input x2, y2, r2:" << endl;
		cin >> x2 >> y2 >> r2;
	perim2 = getperim(r2);
	s2 = getarea(r2);
	return 0;
}
