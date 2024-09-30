#if !defined(BEZIER_CURVE_H_)
#define BEZIER_CURVE_H_

#include <vector>

#include "bezier/node.hpp"

#ifndef _BEZIER_EXPORT
    #ifdef _WIN32
        #define _BEZIER_EXPORT __declspec(dllexport)
    #else
        #define _BEZIER_EXPORT
    #endif
#endif

namespace bezier {

    /**
     * @brief N dimention bezier curve class
     */
    class _BEZIER_EXPORT NDCurve
    {
    private:
        std::vector<Node> nodes;
    public:
        /**
         * @brief Constructs a NDCurve class
         * 
         * @param nodes Control points of curve
         */
        NDCurve(std::vector<Node> nodes);
        ~NDCurve();
        /**
         * @brief Get control points of this NDCurve object
         * 
         * @returns Control points of curve
         */
        std::vector<Node> GetNodes();
        /**
         * @brief Get control points of this NDCurve object
         */
        void SetNode(std::vector<Node> nodes);
        /**
         * @brief Evalutate B(t) along the curve
         * 
         * @param t Parameter along the curve
         * 
         * @returns Point of curve
         */
        Node Evaluate(float t);
    };
    
} // namespace bezier


#endif // BEZIER_CURVE_H_
