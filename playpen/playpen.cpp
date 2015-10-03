// playpen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

namespace life
{
    auto meaning = 42;
    auto* pm = &meaning;
    auto& rm = meaning;
}
// old style enum
enum Color
{
    Red,
    Green,
    Blue
};

enum class GameState : short
{
    Win,
    Loss,
    Draw
};

union Data
{
    int integer;
    float fpnumber;
    char* text;
};

struct Size
{
    int width, height;
};

using namespace life;
int main(int argh, char* argv[])
{
    cout << "Hello World!" << endl;
    Color c = Color::Red;
    GameState gs = GameState::Win;
    cout << "Meaning of life! " << meaning << " Takes up " << sizeof(meaning) << " byes" << endl;
    *pm = 43;
    cout << "Meaning of life! " << meaning << " Takes up " << sizeof(meaning) << " byes" << endl;
    rm = 42;
    cout << "Meaning of life! " << meaning << " Takes up " << sizeof(meaning) << " byes" << endl;
    Size s{ 10,4 };
    cout << argv[0] << endl;
    Data d;
    string awesome = string("hello");
    string* t = new string("world");
    int* values = new int[128];

    int x = 4;
    auto doubleValue = [](int z) { return z * 2; };
    int y = 5;
    auto increaseByY = [&y](int z) { return y + z; };
    cout << x << "*2=" << doubleValue(x);
    cout << x << "4+y=" << increaseByY(x);

    delete[] values;
    delete t;
    getchar();
    return 0;
}

inline int add(int a, int b) { return a + b; }
auto add2(int a, int b)-> int { return a + b; }

void inc(int& a) { a++; }