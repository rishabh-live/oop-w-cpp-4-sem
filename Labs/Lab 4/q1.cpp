// Write a C++ Program to for matrix operation using
// switch-case.
// (a) add two matrix
// (b) subtract two matrix
// (c) multiply two matrix
// (d) transpose of a matrix

#include <iostream>

using namespace std;


class Matrix{
    private:

    public:
        addMatrix();
        subtractMatrix();
        multiplyMatrix();
        transposeMatrix();
        resetMatrix();
}

Matrix::addMatrix(){
    cout << "Done";
}

Matrix::subtractMatrix(){
    cout << "Cool";
}

Matrix::multiplyMatrix(){
    cout << "Multiply Success";
}

Matrix::transposeMatrix(){
    cout << "Transpose Success";
}

int main(){
    Matrix matrix;
    return 0;
}