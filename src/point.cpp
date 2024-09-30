#include "bezier/point.hpp"

namespace bezier
{
    Point Point::operator+(const Point& other) const {
        return {x + other.x, y + other.y};
    }
    Point Point::operator*(double scalar) const {
        return {x * scalar, y * scalar};
    }

} // namespace bezier
