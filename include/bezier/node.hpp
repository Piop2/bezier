#if !defined(BEZIER_NODE_H_)
#define BEZIER_NODE_H_

namespace bezier
{
    struct Node {
        float x, y;

        Node operator+(const Node& other) const;
        Node operator*(float scalar) const;
    };
} // namespace bezier

#endif // BEZIER_NODE_H_
