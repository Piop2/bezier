#include "bezier/node.hpp"

namespace bezier {
    Node Node::operator+(const Node& other) const {
        return {x + other.x, y + other.y};
    }
    Node Node::operator*(float scalar) const {
        return {x * scalar, y * scalar};
    }

} // namespace bezier
