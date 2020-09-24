#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <array>

#include "matrix.hpp"
#include "../vector/vector.hpp"

namespace algebra
{
    template <typename T>
    class Matrix;
    template <>
    class Matrix<double>
    {
    public:
        Matrix(const std::vector<std::vector<double>> &matrix);
        Matrix(const unsigned int &hor_size, const unsigned int &ver_size); // (const unsigned int &horizontal size, const unsigned int &vertical size)
    private: // variables
        std::vector<std::vector<double>> _matrix;
    public: // setters and getters
        std::vector<std::vector<double>> get_matrix() const;
        std::array<std::size_t, 2> size() const;
        void set_matrix(const std::vector<std::vector<double>> &matrix);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, const Matrix<double> &M);
        std::vector<double>& operator[](std::size_t n);
        // additions
        Matrix<double>& operator+=(const Matrix<int> &A);
        Matrix<double>& operator+=(const Matrix<double> &A);
        Matrix<double>& operator+=(const Matrix<float> &A);
        friend Matrix<double> operator+(Matrix<double> A, const Matrix<int> &B);
        friend Matrix<double> operator+(Matrix<double> A, const Matrix<double> &B);
        friend Matrix<double> operator+( Matrix<double> A, const Matrix<float> &B);
        // subtractions
        Matrix<double>& operator-=(const Matrix<int> &A);
        Matrix<double>& operator-=(const Matrix<double> &A);
        Matrix<double>& operator-=(const Matrix<float> &A);
        friend Matrix<double> operator-(Matrix<double> A, const Matrix<int> &B);
        friend Matrix<double> operator-(Matrix<double> A, const Matrix<double> &B);
        friend Matrix<double> operator-(Matrix<double> A, const Matrix<float> &B);
        // Scala multiplications
        Matrix<double>& operator*=(const int &x);
        Matrix<double>& operator*=(const double &x);
        Matrix<double>& operator*=(const float &x);
        friend Matrix<double> operator*(Matrix<double> A, const int &x);
        friend Matrix<double> operator*(Matrix<double> A, const double &x);
        friend Matrix<double> operator*(Matrix<double> A, const float &x);
        friend Matrix<double> operator*(const int &x, Matrix<double> A);
        friend Matrix<double> operator*(const double &x, Matrix<double> A);
        friend Matrix<double> operator*(const float &x, Matrix<double> A);
        // multiply matrices
        Matrix<double>& operator*=(const Matrix<int> &B);
        Matrix<double>& operator*=(const Matrix<double> &B);
        Matrix<double>& operator*=(const Matrix<float> &B);
        friend Matrix<double> operator*(Matrix<double> A, const Matrix<int> &B);
        friend Matrix<double> operator*(Matrix<double> A, const Matrix<double> &B);
        friend Matrix<double> operator*(Matrix<double> A, const Matrix<float> &B);
    };
    std::ostream& operator<<(std::ostream &os, const Matrix<double> &M);
    Matrix<double> operator+(const Matrix<double> A, const Matrix<int> &B);
    Matrix<double> operator+(const Matrix<double> A, const Matrix<double> &B);
    Matrix<double> operator+(const Matrix<double> A, const Matrix<float> &B);
    Matrix<double> operator-(Matrix<double> A, const Matrix<int> &B);
    Matrix<double> operator-(Matrix<double> A, const Matrix<double> &B);
    Matrix<double> operator-(Matrix<double> A, const Matrix<float> &B);
    Matrix<double> operator*(Matrix<double> A, const int &x);
    Matrix<double> operator*(Matrix<double> A, const double &x);
    Matrix<double> operator*(Matrix<double> A, const float &x);
    Matrix<double> operator*(const int &x, Matrix<double> A);
    Matrix<double> operator*(const double &x, Matrix<double> A);
    Matrix<double> operator*(const float &x, Matrix<double> A);
    Matrix<double> operator*(algebra::Vector<double> A, const algebra::Vector<int> &B);
    Matrix<double> operator*(algebra::Vector<double> A, const algebra::Vector<double> &B);
    Matrix<double> operator*(algebra::Vector<double> A, const algebra::Vector<float> &B);
}
