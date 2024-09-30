#if !defined(BEZIER_BEZIER_H_)
#define BEZIER_BEZIER_H_

#include "bezier/curve.hpp"

#ifndef BEZIER_EXPORT
    #ifdef _WIN32
        #define BEZIER_EXPORT __declspec(dllexport)
    #else
        #define BEZIER_EXPORT
    #endif
#endif

namespace bezier {
    
} // namespace bezier


#endif // BEZIER_BEZIER_H_
