#pragma once
#include <iosfwd>
using namespace std;

// class ostream;
class Matrix
{
    private:

    public:
        int values[3][3];
        void Print();
        Matrix(int, int, int, int, int, int, int, int, int);

Matrix operator*(const Matrix& m2) const;
// friend std::ostream& operator<<(std::ostream& stream, const Matrix& m);

};

std::ostream& operator<<(std::ostream& stream, const Matrix& m);
