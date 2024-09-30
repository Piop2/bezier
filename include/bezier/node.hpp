#if !defined(_BEZIER_NODE_H_)
#define _BEZIER_NODE_H_

#ifndef _BEZIER_EXPORT
    #ifdef _WIN32
        #define _BEZIER_EXPORT __declspec(dllexport)
    #else
        #define _BEZIER_EXPORT
    #endif
#endif

namespace bezier {
    /**
     * @brief Simple 2D vector structure
     */
    struct _BEZIER_EXPORT Node {
        float x, y;

        Node operator+(const Node& other) const;
        Node operator*(float scalar) const;
    };
} // namespace bezier

#endif // _BEZIER_NODE_H_
