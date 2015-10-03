#include <iostream>
#include <cassert>
#include "foo.h"
#include "../staticlib/foo.h"
#include "../dynamiclib/dynamiclib.h"

using namespace std;
#if _DEBUG
void foo() {}
#endif
#define MUL(a,b) a*b
int main()
{
    int one = add1(5);
    assert(MUL(one, 1) == 6);
    cout << multiply(2, 3) << endl;
    cout << "2+3=" << add(2, 3) << endl;
    cout << "Hello, C++" << endl;
    getchar();
    return 0;
}