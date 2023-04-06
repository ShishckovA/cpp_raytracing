//
// Created by Alexey Shishkov on 05.04.2023.
//

#include "ray.h"

Ray::Ray(const Vector3D &pos, const Vector3D &view_dir) : pos(pos), view_dir(view_dir.normalize()) {}


IntersectVisibleObjectWithRayResult::IntersectVisibleObjectWithRayResult(bool intersects,
                                                                         const Vector3D &intersection_point,
                                                                         double time_to_intersect) :
        intersects(intersects),
        intersection_point(intersection_point),
        time_to_intersect(time_to_intersect) {}

