#pragma once
#include <vector>
#ifdef DLL_EXPORTS
	#define CGAL_EXPORT __declspec(dllexport)
#else
	#define CGAL_EXPORT __declspec(dllimport)
#endif
struct MyPoint2 {
	double x;
	double y;
};
CGAL_EXPORT double DistanceByCGAL(MyPoint2 pt1, MyPoint2 pt2);
