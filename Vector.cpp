//
// Created by Dmitry Okhotnikov on 11.09.2015.
//

#include "Vector.h"

class Vector {

private:
    int x,y,z;
    std::string str;

public:
    /* Three constructors */
    Vector(){
        x = 0;
        y = 0;
        z = 0;
    }

    Vector(int x1, int y1, int z1){
        x = x1;
        y = y1;
        z = z1;
    }

    Vector(const Vector &other){
        x = other.x;
        y = other.y;
        z = other.z;
    }

    /* Standard methods */

    void setX(int x1){ x = x1; }

    void setY(int y1) { y = y1; }

    void setZ(int z1) { z = z1; }

    int getX(){ return x; }

    int getY(){ return y; }

    int getZ(){ return z; }



    Vector operator+(const Vector &right) const {
        return Vector(x + right.x, y + right.y, z + right.z);
    }

     Vector operator-(const Vector &right) const {
         return Vector(x - right.x, y - right.y, z - right.z);
    }

    int operator*(const Vector &right) const {
        return ((x * right.x) + (y * right.y) + (z * right.z));
    }

    Vector operator*(const int &right) const {
        return Vector(x * right, y * right, z * right);
    }

    void crossProduct(const Vector &right) const {
        Vector cross;
        cross.x = (y * right.z) - (z * right.y);
        cross.y = (z * right.x) - (x * right.z);
        cross.z = (x * right.y) - (y * right.x);
    }

    void Debug(){
        cout << "x: " << x << endl << "y: " << y << endl << "z: " << z << endl;
    }

    double getLength(){
        return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    }


    string toString(){
        std::ostringstream strsX,strsY,strsZ;
        str = "[";
        strsX << x << " ";
        str += strsX.str();
        strsY << y << " ";
        str += strsY.str();
        strsZ << z;
        str += strsZ.str();
        str += "]";
        return str;
    }
    void println(){
        string out;
        out = toString();
        cout << out << endl;
    }



};