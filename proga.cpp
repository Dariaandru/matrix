#include "book.h"
#include <iostream>
using namespace std;

int main()
{
    Matrix m1(1,2,3,4,5,6,7,8,9);

    cout << "Matrix 1" << endl;
    m1.Print();

    Matrix m2(1,2,3,4,5,6,7,8,9);

    cout << "Matrix 2" << endl;
    m2.Print();

    Matrix res = m1*m2;

    cout << "Result of multyplying" << endl;
    // res.Print();

    cout << res << endl;


    return 0;
}
