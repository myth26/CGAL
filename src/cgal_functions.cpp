#include "pch.h"
#include "cgal_functions.h"

double DistanceByCGAL(MyPoint2 pt1, MyPoint2 pt2) {
	Point2 p(pt1.x, pt1.y), q(pt2.x, pt2.y);
	return CGAL::squared_distance(p, q);
}