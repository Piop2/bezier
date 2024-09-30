#if !defined(BEZIER_NODE_H_)
#define BEZIER_NODE_H_

#ifndef BEZIER_EXPORT
    #ifdef _WIN32
        #define BEZIER_EXPORT __declspec(dllexport)
    #else
        #define BEZIER_EXPORT
    #endif
#endif

namespace bezier {
    struct BEZIER_EXPORT Node {
        float x, y;

        Node operator+(const Node& other) const;
        Node operator*(float scalar) const;
    };
} // namespace bezier

#endif // BEZIER_NODE_H_
