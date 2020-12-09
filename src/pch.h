#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include <CGAL/Simple_cartesian.h>

typedef CGAL::Simple_cartesian<double> Kernel;
typedef Kernel::Point_2 Point2;
typedef Kernel::Segment_2 Segment_2;
#endif //PCH_H