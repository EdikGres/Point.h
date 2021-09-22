//
// Created by atlon on 22.09.2021.
//

#ifndef TESTCPP_POINT_H
#define TESTCPP_POINT_H


class Point {
private:

public:
    int x, y, z;

    Point() : x(0), y(0), z(0) {};

    Point(int x, int y, int z) : x(x), y(y), z(z) {};

    Point &operator=(Point p2);

    Point &operator~();

    Point operator*(Point p2);

    Point operator/(Point p2);

    Point operator+(Point p2);

    friend Point operator+(Point p, int val);

    friend Point operator+(int val, Point p);

    Point operator-(Point p2);

    friend Point operator-(Point p, int val);

    friend Point operator-(int val, Point p);

    Point operator++();

    Point operator--();

    const Point operator++(int);
    //friend const Point operator++(Point &p, int);

    const Point operator--(int);

    void show();
};

#endif //TESTCPP_POINT_H
