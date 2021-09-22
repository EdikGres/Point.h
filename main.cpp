#include <iostream>
#include "Point.h"
/*
 * then add another operators
 */
int main() {

    Point a, b(15, 20, 60), c(0, 5, 30);
    a.show();
    b.show();
    a = b++;
    a.show();
    b.show();
    return 0;
}
