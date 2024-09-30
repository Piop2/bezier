#if !defined(_BEZIER_BEZIER_H_)
#define _BEZIER_BEZIER_H_

#include "bezier/curve.hpp"

#ifndef _BEZIER_EXPORT
    #ifdef _WIN32
        #define _BEZIER_EXPORT __declspec(dllexport)
    #else
        #define _BEZIER_EXPORT
    #endif
#endif

namespace bezier {
    // version
    static const unsigned VERSION_MAJOR = 1;
    static const unsigned VERSION_MINOR = 0;
} // namespace bezier


#endif // _BEZIER_BEZIER_H_
