#ifndef CPP_TEST_H
#define CPP_TEST_H

/*
What extern "C" does is affect linkage. C++ functions, when compiled, have their names mangled -- this is what makes overloading possible.
The function name gets modified based on the types and number of parameters, so that two functions with the same name will have different symbol names.

Code inside an extern "C" is still C++ code. There are limitations on what you can do in an extern "C" block, but they're all about linkage.
You can't define any new symbols that can't be built with C linkage. That means no classes or templates, for example.
*/

#ifdef __cplusplus
extern "C" {
#endif

extern int f(int);

#ifdef __cplusplus
}
#endif

#endif