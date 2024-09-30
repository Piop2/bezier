#if !defined(BEZIER_CURVE_H_)
#define BEZIER_CURVE_H_

#include <vector>

#include "bezier/node.hpp"

#ifndef BEZIER_EXPORT
    #ifdef _WIN32
        #define BEZIER_EXPORT __declspec(dllexport)
    #else
        #define BEZIER_EXPORT
    #endif
#endif

namespace bezier {
    class BEZIER_EXPORT NDCurve
    {
    private:
        std::vector<Node> nodes;
    public:
        NDCurve(std::vector<Node> nodes);
        ~NDCurve();
        std::vector<Node> GetNodes();
        void SetNode(std::vector<Node> nodes);
        Node Evaluate(float t);
    };
    
} // namespace bezier


#endif // BEZIER_CURVE_H_
