#include <iostream>
#include "basic.h"

using std::cout;
using std::endl;

int main() {
    cluna::Point<int> p1(0, 0), q1(2, 4);
    cluna::Point<int> p2(2, 2), q2(4, 4);
    cluna::Point<int> p3(3, 2), q3(6, 3);
    cluna::Point<int> s(3, 3);

    if(cluna::ToLeft(p1, q1, s))
        cout << "Line 1 is on the left of Point s" << endl;
    
    if(cluna::ToLeft(p2, q2, s))
        cout << "Line 2 is on the left of Point s" << endl;

    if(cluna::ToLeft(p3, q3, s))
        cout << "Line 3 is on the left of Point s" << endl;

    return 0;
}
