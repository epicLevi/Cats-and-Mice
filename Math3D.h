#ifndef Math3D_h
#define Math3D_h

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <time.h>

#include <stack>
#include <iostream>

#include "Matrix.h"
#include "Point.h"

using namespace std;

#define ROWS 4
#define COLS 4

class Math3D {
public:
    Matrix matrix;

    /* Model matrices stack. */
    stack<Matrix> matrixStack;

    Math3D();
    ~Math3D();

    void loadIdentity(float M[][4]);

    void translate(float x, float y, float z);
    void scale(float x, float y, float z);
    void rotateX(float theta);
    void rotateY(float theta);
    void rotateZ(float theta);
    void rotate(float theta, Point p1, Point p2);

    /* Multiplies inputMatrix with matrix.M. */
    void operate(float inputMatrix[][4]);

    void push();
    void pop();

    void print();
};

#endif // Math3D_h
