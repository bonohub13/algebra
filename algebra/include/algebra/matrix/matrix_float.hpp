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
    class Matrix<float>
    {
    public:
        Matrix(const std::vector<std::vector<float>> &matrix);
        Matrix(const unsigned int &hor_size, const unsigned int &ver_size); // (const unsigned int &horizontal size, const unsigned int &vertical size)
    private: // variables
        std::vector<std::vector<float>> _matrix;
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<std::vector<float>> get_matrix() const;
        std::array<std::size_t, 2> size() const;
        void set_matrix(const std::vector<std::vector<float>> &matrix);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, const Matrix<float> &M);
        std::vector<float>& operator[](std::size_t n);
        // additions
        Matrix<float>& operator+=(const Matrix<int> &A);
        Matrix<float>& operator+=(const Matrix<double> &A);
        Matrix<float>& operator+=(const Matrix<float> &A);
        friend Matrix<float> operator+(Matrix<float> A, const Matrix<int> &B);
        friend Matrix<float> operator+(Matrix<float> A, const Matrix<double> &B);
        friend Matrix<float> operator+(Matrix<float> A, const Matrix<float> &B);
        // subtractions
        Matrix<float>& operator-=(const Matrix<int> &A);
        Matrix<float>& operator-=(const Matrix<double> &A);
        Matrix<float>& operator-=(const Matrix<float> &A);
        friend Matrix<float> operator-(Matrix<float> A, const Matrix<int> &B);
        friend Matrix<float> operator-(Matrix<float> A, const Matrix<double> &B);
        friend Matrix<float> operator-(Matrix<float> A, const Matrix<float> &B);
        // Scala multiplications
        Matrix<float>& operator*=(const int &x);
        Matrix<float>& operator*=(const double &x);
        Matrix<float>& operator*=(const float &x);
        friend Matrix<float> operator*(Matrix<float> A, const int &x);
        friend Matrix<float> operator*(Matrix<float> A, const double &x);
        friend Matrix<float> operator*(Matrix<float> A, const float &x);
        friend Matrix<float> operator*(const int &x, Matrix<float> A);
        friend Matrix<float> operator*(const double &x, Matrix<float> A);
        friend Matrix<float> operator*(const float &x, Matrix<float> A);
        // multiply matrices
        Matrix<float>& operator*=(const Matrix<int> &B);
        Matrix<float>& operator*=(const Matrix<double> &B);
        Matrix<float>& operator*=(const Matrix<float> &B);
        friend Matrix<float> operator*(Matrix<float> A, const Matrix<int> &B);
        friend Matrix<float> operator*(Matrix<float> A, const Matrix<double> &B);
        friend Matrix<float> operator*(Matrix<float> A, const Matrix<float> &B);
    };
    std::ostream& operator<<(std::ostream &os, const Matrix<float> &M);
    Matrix<float> operator+(Matrix<float> A, const Matrix<int> &B);
    Matrix<float> operator+(Matrix<float> A, const Matrix<double> &B);
    Matrix<float> operator+(Matrix<float> A, const Matrix<float> &B);
    Matrix<float> operator-(Matrix<float> A, const Matrix<int> &B);
    Matrix<float> operator-(Matrix<float> A, const Matrix<double> &B);
    Matrix<float> operator-(Matrix<float> A, const Matrix<float> &B);
    Matrix<float> operator*(Matrix<float> A, const int &x);
    Matrix<float> operator*(Matrix<float> A, const double &x);
    Matrix<float> operator*(Matrix<float> A, const float &x);
    Matrix<float> operator*(const int &x, Matrix<float> A);
    Matrix<float> operator*(const double &x, Matrix<float> A);
    Matrix<float> operator*(const float &x, Matrix<float> A);
    Matrix<float> operator*(algebra::Vector<float> A, const algebra::Vector<int> &B);
    Matrix<float> operator*(algebra::Vector<float> A, const algebra::Vector<double> &B);
    Matrix<float> operator*(algebra::Vector<float> A, const algebra::Vector<float> &B);
}
