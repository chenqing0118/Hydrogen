#pragma once
#ifdef HY_PLATFORM_WINDOWS
    #ifdef	HY_BUILD_DLL
        #define HYDROGEN_API __declspec(dllexport)
    #else
        #define HYDROGEN_API __declspec(dllimport)
    #endif
#else 
#error Hydrogen only support Windows!
#endif