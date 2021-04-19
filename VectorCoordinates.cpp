#include "VectorCoordinates.h"
#include <iostream>
#include <cmath>
using namespace std;

VectorCoordinates& VectorCoordinates::operator= (const VectorCoordinates& v1)
{
    x = v1.x;
    y = v1.y;
    z = v1.z;
    return *this;
}

VectorCoordinates VectorCoordinates::operator+ (const VectorCoordinates& a)
{
    VectorCoordinates sum;
    sum.x = (a.x + x);
    sum.y = (a.y + y);
    sum.z = (a.z + z);
    return sum;
}

VectorCoordinates VectorCoordinates::operator- (const VectorCoordinates& a)
{
    VectorCoordinates sub;
    sub.x = (x - a.x);
    sub.y = (y - a.y);
    sub.z = (z - a.z);
    return sub;
}

VectorCoordinates VectorCoordinates::operator* (double value)
{
    VectorCoordinates mult;
    mult.x = x * value;
    mult.y = y * value;
    mult.z = z * value;
    return mult;
}

ostream& operator<< (ostream& out, const VectorCoordinates& v)
{
    out << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return out;
}

istream& operator>> (istream& in, VectorCoordinates& v)
{
    in >> v.x;
    in >> v.y;
    in >> v.z;
    return in;
}

double VectorCoordinates::scalar_product(VectorCoordinates& v1, VectorCoordinates& v2)
{
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}

double VectorCoordinates::length(VectorCoordinates& v1)
{
    return sqrt((v1.x * v1.x) + (v1.y * v1.y) + (v1.z * v1.z));
}

VectorCoordinates VectorCoordinates::vector_product(VectorCoordinates& v1, VectorCoordinates& v2)
{
    VectorCoordinates vec_prod;
    vec_prod.x = (v1.y * v2.z - v1.z * v2.y);
    vec_prod.y = (v1.z * v2.x - v1.x * v2.z);
    vec_prod.z = (v1.x * v2.y - v1.y * v2.x);
    return vec_prod;
}