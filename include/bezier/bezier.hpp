#if !defined(BEZIER_BEZIER_H_)
#define BEZIER_BEZIER_H_

#include "bezier/curve.hpp"

#ifndef _BEZIER_EXPORT
    #ifdef _WIN32
        #define _BEZIER_EXPORT __declspec(dllexport)
    #else
        #define _BEZIER_EXPORT
    #endif
#endif

namespace bezier {
    
} // namespace bezier


#endif // BEZIER_BEZIER_H_
