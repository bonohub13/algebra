#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <array>

#include "matrix.hpp"

namespace algebra
{
    template <typename T>
    class Matrix;
    template <>
    class Matrix<int>
    {
    public:
        Matrix(const std::vector<std::vector<int>> &matrix);
        Matrix(const unsigned int &hor_size, const unsigned int &ver_size); // (const unsigned int &horizontal size, const unsigned int &vertical size)
    private: // variables
        std::vector<std::vector<int>> _matrix;
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<std::vector<int>> get_matrix() const;
        std::array<std::size_t, 2> size() const;
        void set_matrix(const std::vector<std::vector<int>> &matrix);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, const Matrix<int> &M);
        std::vector<int>& operator[](std::size_t n);
        // additions
        Matrix<int>& operator+=(const Matrix<int> &A);
        Matrix<int>& operator+=(const Matrix<double> &A);
        Matrix<int>& operator+=(const Matrix<float> &A);
        friend Matrix<int> operator+(Matrix<int> A, const Matrix<int> &B);
        friend Matrix<int> operator+(Matrix<int> A, const Matrix<double> &B);
        friend Matrix<int> operator+(Matrix<int> A, const Matrix<float> &B);
        // subtractions
        Matrix<int>& operator-=(const Matrix<int> &A);
        Matrix<int>& operator-=(const Matrix<double> &A);
        Matrix<int>& operator-=(const Matrix<float> &A);
        friend Matrix<int> operator-(Matrix<int> A, const Matrix<int> &B);
        friend Matrix<int> operator-(Matrix<int> A, const Matrix<double> &B);
        friend Matrix<int> operator-(Matrix<int> A, const Matrix<float> &B);
        // Scala multiplications
        Matrix<int>& operator*=(const int &x);
        Matrix<int>& operator*=(const double &x);
        Matrix<int>& operator*=(const float &x);
        friend Matrix<int> operator*(const int &x, Matrix<int> A);
        friend Matrix<int> operator*(const double &x, Matrix<int> A);
        friend Matrix<int> operator*(const float &x, Matrix<int> A);
        friend Matrix<int> operator*(Matrix<int> A, const int &x);
        friend Matrix<int> operator*(Matrix<int> A, const double &x);
        friend Matrix<int> operator*(Matrix<int> A, const float &x);
        // multiply matrices
        Matrix<int>& operator*=(const Matrix<int> &B);
        Matrix<int>& operator*=(const Matrix<double> &B);
        Matrix<int>& operator*=(const Matrix<float> &B);
        friend Matrix<int> operator*(Matrix<int> A, const Matrix<int> &B);
        friend Matrix<int> operator*(Matrix<int> A, const Matrix<double> &B);
        friend Matrix<int> operator*(Matrix<int> A, const Matrix<float> &B);
    };
    std::ostream& operator<<(std::ostream &os, const Matrix<int> &M);
    Matrix<int> operator+(Matrix<int> A, const Matrix<int> &B);
    Matrix<int> operator+(Matrix<int> A, const Matrix<double> &B);
    Matrix<int> operator+(Matrix<int> A, const Matrix<float> &B);
    Matrix<int> operator-(Matrix<int> A, const Matrix<int> &B);
    Matrix<int> operator-(Matrix<int> A, const Matrix<double> &B);
    Matrix<int> operator-(Matrix<int> A, const Matrix<float> &B);
    Matrix<int> operator*(const int &x, Matrix<int> A);
    Matrix<int> operator*(const double &x, Matrix<int> A);
    Matrix<int> operator*(const float &x, Matrix<int> A);
    Matrix<int> operator*(Matrix<int> A, const int &x);
    Matrix<int> operator*(Matrix<int> A, const double &x);
    Matrix<int> operator*(Matrix<int> A, const float &x);
    Matrix<int> operator*(algebra::Vector<int> A, const algebra::Vector<int> &B);
    Matrix<int> operator*(algebra::Vector<int> A, const algebra::Vector<double> &B);
    Matrix<int> operator*(algebra::Vector<int> A, const algebra::Vector<float> &B);
}
