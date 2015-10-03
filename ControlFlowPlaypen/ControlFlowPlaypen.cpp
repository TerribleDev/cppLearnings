// ControlFlowPlaypen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
    int a[]{ 1,2,3,4 };
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
    for (int *p = a, *e = a + 4; p != e; ++p)
    {
        cout << *p << endl;
    }
    auto ba = begin(a);
    auto ea = end(a);
    for (; ba != ea; ba++)
    {
        cout << *ba << endl;
    }
    for (auto value : a)
    {
        cout << value << endl;
    }
    vector<int> v{ 5,6,7,8 };
    auto bv = begin(v);
    auto cbv = cbegin(v);

    for (auto i = v.rbegin(); i != v.rend(); ++i)
    {
        cout << *i << endl;
    }

    int awesome = 0;

    switch (awesome)
    {
    case 0:
        cout << "hello" << endl;
        break;
    case 1:
        cout << "world" << endl;
        break;
    default:
        cout << "final" << endl;
        break;
    }

    char *s = "plualsight";
    while (*s)
    {
        putchar(*s);
        s++;
    }
    getchar();
    return 0;
}