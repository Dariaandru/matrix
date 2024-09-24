#include "book.h"
#include "matrix.cpp"
#include <iostream>
using namespace std;
void Matrix::Print()
{
    cout << values[0][0] << "\t" << values[0][1] << "\t" << values[0][2] << endl;
    cout << values[1][0] << "\t" << values[1][1] << "\t" << values[1][2] << endl;
    cout << values[2][0] << "\t" << values[2][1] << "\t" << values[2][2] << endl;

}

std::ostream& operator<<(std::ostream& stream, const Matrix& m) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            stream << m.values[i][j] << "\t";
        }
        stream << endl;
    }
    return stream;
}

Matrix::Matrix(int a11, int a12, int a13, int a21, int a22, int a23, int a31, int a32, int a33)
{
    this->values[0][0] = a11;
    this->values[0][1] = a12;
    this->values[0][2] = a13;

    this->values[1][0] = a21;
    this->values[1][1] = a22;
    this->values[1][2] = a23;

    this->values[2][0] = a31;
    this->values[2][1] = a32;
    this->values[2][2] = a33;
}
