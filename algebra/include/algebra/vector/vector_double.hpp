#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "vector.hpp"

namespace algebra
{
    template <typename T>
    class Vector; // not run
    template <>
    class Vector<double>
    {
    public:
        Vector(std::vector<double> vector);
        Vector(unsigned int size);
    private: // constant values!
        enum class VectorType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vector
    private:
        std::vector<double> _vector;
        VectorType _type;  // for identifying horizontal vector and vertical vector
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<double> get_vector() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vector(std::vector<double> vector);
        void set_type(std::string type);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vector<double> vector);
        double& operator[](std::size_t n);
        /* additions */
        Vector<double>& operator+=(const Vector<int>& A);
        Vector<double>& operator+=(const Vector<double>& A);
        Vector<double>& operator+=(const Vector<float>& A);
        friend Vector<double> operator+(Vector<double> A, const Vector<int>& B);
        friend Vector<double> operator+(Vector<double> A, const Vector<double>& B);
        friend Vector<double> operator+(Vector<double> A, const Vector<float>& B);
        /* subtractions */
        Vector<double>& operator-=(const Vector<int>& A);
        Vector<double>& operator-=(const Vector<double>& A);
        Vector<double>& operator-=(const Vector<float>& A);
        friend Vector<double> operator-(Vector<double> A, const Vector<int>& B);
        friend Vector<double> operator-(Vector<double> A, const Vector<double>& B);
        friend Vector<double> operator-(Vector<double> A, const Vector<float>& B);
        /* Scala multiplications */
        Vector<double>& operator*=(const int &x);
        Vector<double>& operator*=(const double &x);
        Vector<double>& operator*=(const float &x);
        friend Vector<double> operator*(Vector<double> A, const int &x);
        friend Vector<double> operator*(Vector<double> A, const double &x);
        friend Vector<double> operator*(Vector<double> A, const float &x);
        friend Vector<double> operator*(const int &x, Vector<double> A);
        friend Vector<double> operator*(const double &x, Vector<double> A);
        friend Vector<double> operator*(const float &x, Vector<double> A);
    };
    std::ostream& operator<<(std::ostream& os, Vector<double> vector);
    Vector<double> operator+(Vector<double> A, const Vector<int>& B);
    Vector<double> operator+(Vector<double> A, const Vector<double>& B);
    Vector<double> operator+(Vector<double> A, const Vector<float>& B);
    Vector<double> operator-(Vector<double> A, const Vector<int>& B);
    Vector<double> operator-(Vector<double> A, const Vector<double>& B);
    Vector<double> operator-(Vector<double> A, const Vector<float>& B);
    Vector<double> operator*(Vector<double> A, const int &x);
    Vector<double> operator*(Vector<double> A, const double &x);
    Vector<double> operator*(Vector<double> A, const float &x);
    Vector<double> operator*(const int &x, Vector<double> A);
    Vector<double> operator*(const double &x, Vector<double> A);
    Vector<double> operator*(const float &x, Vector<double> A);
}