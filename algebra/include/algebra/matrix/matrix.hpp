#pragma once

#include "matrix_int.hpp"
#include "matrix_double.hpp"
#include "matrix_float.hpp"

#include "../vector/vector.hpp"

/*
* Features to add
    * transpose
    * constructor to take other matrix and convert it to matrix with different type
        * Matrix<int> -> Matrix<double>
* Bugs to fix
*/
namespace algebra
{
    // multiply vector and matrix
    Matrix<int> operator*(Vector<int> A, const Matrix<int> &B);
    Matrix<int> operator*(Vector<int> A, const Matrix<double> &B);
    Matrix<int> operator*(Vector<int> A, const Matrix<float> &B);
    Matrix<double> operator*(Vector<double> A, const Matrix<int> &B);
    Matrix<double> operator*(Vector<double> A, const Matrix<double> &B);
    Matrix<double> operator*(Vector<double> A, const Matrix<float> &B);
    Matrix<float> operator*(Vector<float> A, const Matrix<int> &B);
    Matrix<float> operator*(Vector<float> A, const Matrix<double> &B);
    Matrix<float> operator*(Vector<float> A, const Matrix<float> &B);
    // - - -
    Vector<int> operator*(Matrix<int> A, const Vector<int> &B);
    Vector<int> operator*(Matrix<int> A, const Vector<double> &B);
    Vector<int> operator*(Matrix<int> A, const Vector<float> &B);
    Vector<double> operator*(Matrix<double> A, const Vector<int> &B);
    Vector<double> operator*(Matrix<double> A, const Vector<double> &B);
    Vector<double> operator*(Matrix<double> A, const Vector<float> &B);
    Vector<float> operator*(Matrix<float> A, const Vector<int> &B);
    Vector<float> operator*(Matrix<float> A, const Vector<double> &B);
    Vector<float> operator*(Matrix<float> A, const Vector<float> &B);
    // multiply matrices
    Matrix<int> operator*(Matrix<int> A, const Matrix<int> &B);
    Matrix<int> operator*(Matrix<int> A, const Matrix<double> &B);
    Matrix<int> operator*(Matrix<int> A, const Matrix<float> &B);
    Matrix<double> operator*(Matrix<double> A, const Matrix<int> &B);
    Matrix<double> operator*(Matrix<double> A, const Matrix<double> &B);
    Matrix<double> operator*(Matrix<double> A, const Matrix<float> &B);
    Matrix<float> operator*(Matrix<float> A, const Matrix<int> &B);
    Matrix<float> operator*(Matrix<float> A, const Matrix<double> &B);
    Matrix<float> operator*(Matrix<float> A, const Matrix<float> &B);
}