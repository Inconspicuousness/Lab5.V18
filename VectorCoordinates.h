#ifndef VECTORCOORDINATES_H
#define VECTORCOORDINATES_H
#include <iostream>
using namespace std;

class VectorCoordinates
{
private:
    double x, y, z;

public:

    VectorCoordinates(double x_ = 0.0, double y_ = 0.0, double z_ = 0.0) : x(x_), y(y_), z(z_)
    {
    }

    VectorCoordinates& operator= (const VectorCoordinates& v1);
    VectorCoordinates operator+ (const VectorCoordinates& a);
    VectorCoordinates operator- (const VectorCoordinates& a);
    VectorCoordinates operator*(double value);
    friend ostream& operator<< (ostream& out, const VectorCoordinates& v);
    friend istream& operator>> (istream& in, VectorCoordinates& v);
    double scalar_product(VectorCoordinates& v1, VectorCoordinates& v2);
    double length(VectorCoordinates& v1);
    VectorCoordinates vector_product(VectorCoordinates& v1, VectorCoordinates& v2);
};
#endif
