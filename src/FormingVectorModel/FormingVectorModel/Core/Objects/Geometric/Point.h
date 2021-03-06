﻿#ifndef CORE_OBJECTS_GEOMETRIC_POINT_H
#define CORE_OBJECTS_GEOMETRIC_POINT_H

#include "IPoint.h"

namespace Core
{
	namespace Objects
	{
		namespace Geometric
		{
			class Point : public IPoint
			{
			public:
				Point();
				Point(int x, int y);
				Point(IPoint* other);
				Point(const Point& other);

				int x() const override;
				int y() const override;

				std::string to_string() override;

				std::vector<Vectorization::IntersectionPoint*> get_intersections() { std::vector<Vectorization::IntersectionPoint*> s; return s; }

			private:
				int _x;
				int _y;
			};
		}
	}
}

#endif
