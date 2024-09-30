#if !defined(BEZIER_POINT_H_)
#define BEZIER_POINT_H_

namespace bezier
{
    struct Point {
        double x, y;

        Point operator+(const Point& other) const;
        Point operator*(double scalar) const;
    };
} // namespace bezier

#endif // BEZIER_POINT_H_
