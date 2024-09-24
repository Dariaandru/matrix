#include "book.h"

Matrix Matrix::operator*(const Matrix& m2) const {
    int a11 = values[0][0] * m2.values[0][0] + values[0][1] * m2.values[1][0] + values[0][2] * m2.values[2][0];

    int a12 = values[0][0] * m2.values[0][1] + values[0][1] * m2.values[1][1] + values[0][2] * m2.values[2][1];

    int a13 = values[0][0] * m2.values[0][2] + values[0][1] * m2.values[1][2] + values[0][2] * m2.values[2][2];

    int a21 = values[1][0] * m2.values[0][0] + values[1][1] * m2.values[1][0] + values[1][2] * m2.values[2][0];

    int a22 = values[1][0] * m2.values[0][1] + values[1][1] * m2.values[1][1] + values[1][2] * m2.values[2][1];

    int a23 = values[1][0] * m2.values[0][2] + values[1][1] * m2.values[1][2] + values[1][2] * m2.values[2][2];

    int a31 = values[2][0] * m2.values[0][0] + values[2][1] * m2.values[1][0] + values[2][2] * m2.values[2][0];

    int a32 = values[2][0] * m2.values[0][1] + values[2][1] * m2.values[1][1] + values[2][2] * m2.values[2][1];

    int a33 = values[2][0] * m2.values[0][2] + values[2][1] * m2.values[1][2] + values[2][2] * m2.values[2][2];

    Matrix res(a11, a12, a13, a21, a22, a23, a31, a32, a33);

    return res;
}