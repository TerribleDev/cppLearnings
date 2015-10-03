// dynamiclib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "dynamiclib.h"

// This is an example of an exported variable
DYNAMICLIB_API int ndynamiclib = 0;

// This is an example of an exported function.
DYNAMICLIB_API int fndynamiclib(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see dynamiclib.h for the class definition
Cdynamiclib::Cdynamiclib()
{
    return;
}

DYNAMICLIB_API int multiply(int a, int b)
{
    return a*b;
}