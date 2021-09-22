//
// Created by atlon on 22.09.2021.
//

#include "Point.h"
#include <iostream>

Point &Point::operator=(Point p2) {
    x = p2.x;
    y = p2.y;
    z = p2.z;
    return *this;
}

Point &Point::operator~() {
    x *= -1;
    y *= -1;
    z *= -1;
    return *this;
}

Point Point::operator*(Point p2) {
    Point tmp;
    tmp.x = x * p2.x;
    tmp.y = y * p2.y;
    tmp.z = z * p2.z;
    return tmp;
}

Point Point::operator/(Point p2) {
    Point tmp;
    if (p2.x == 0 || p2.y == 0 || p2.z == 0)
        throw "Division by zero";
    tmp.x = x / p2.x;
    tmp.y = y / p2.y;
    tmp.z = z / p2.z;
    return tmp;
}

Point Point::operator+(Point p2) {
    Point tmp;
    tmp.x = x + p2.x;
    tmp.y = y + p2.y;
    tmp.z = z + p2.z;
    return tmp;
}

Point operator+(Point p, int val) {
    Point tmp;
    tmp.x = p.x + val;
    tmp.y = p.y + val;
    tmp.z = p.z + val;
    return tmp;
}

Point operator+(int val, Point p) {
    Point tmp;
    tmp.x = p.x + val;
    tmp.y = p.y + val;
    tmp.z = p.z + val;
    return tmp;
}

Point Point::operator-(Point p2) {
    Point tmp;
    tmp.x = x - p2.x;
    tmp.y = y - p2.y;
    tmp.z = z - p2.z;
    return tmp;
}

Point operator-(Point p, int val) {
    Point tmp;
    tmp.x = p.x - val;
    tmp.y = p.y - val;
    tmp.z = p.z - val;
    return tmp;
}

Point operator-(int val, Point p) {
    Point tmp;
    tmp.x = val - p.x;
    tmp.y = val - p.y;
    tmp.z = val - p.z;
    return tmp;
}

Point Point::operator++() {
    x++;
    y++;
    z++;
    return *this;
}

Point Point::operator--() {
    x--;
    y--;
    z--;
    return *this;
}

const Point Point::operator++(int) {
    Point tmp = *this;
    x++;
    y++;
    z++;
    return tmp;
}

/*const Point operator++(Point &p, int val){
    Point tmp = p;
    ++p;
    return tmp;
}*/

const Point Point::operator--(int) {
    Point tmp = *this;
    x--;
    y--;
    z--;
    return tmp;
}

void Point::show() {
    std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
}



