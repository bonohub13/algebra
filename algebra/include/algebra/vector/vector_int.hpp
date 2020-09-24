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
    class Vector<int>
    {
    public:
        Vector(std::vector<int> vector);
        Vector(unsigned int size);
    private: // constant values!
        enum class VectorType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vector
    private:
        std::vector<int> _vector;
        VectorType _type; // for identifying horizontal vector and vertical vector
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<int> get_vector() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vector(std::vector<int> vector);
        void set_type(std::string type);
    public: // operators
        /* format string output */
        friend std::ostream& operator<<(std::ostream &os, Vector<int> vector);
        int& operator[](std::size_t n);
        /* additions */
        Vector<int>& operator+=(const Vector<int>& A);
        Vector<int>& operator+=(const Vector<double>& A);
        Vector<int>& operator+=(const Vector<float>& A);
        friend Vector<int> operator+(Vector<int> A, const Vector<int>& B);
        friend Vector<int> operator+(Vector<int> A, const Vector<double>& B);
        friend Vector<int> operator+(Vector<int> A, const Vector<float>& B);
        /* subtractions */
        Vector<int>& operator-=(const Vector<int>& A);
        Vector<int>& operator-=(const Vector<double>& A);
        Vector<int>& operator-=(const Vector<float>& A);
        friend Vector<int> operator-(Vector<int> A, const Vector<int>& B);
        friend Vector<int> operator-(Vector<int> A, const Vector<double>& B);
        friend Vector<int> operator-(Vector<int> A, const Vector<float>& B);
        /* Scala multiplications */
        Vector<int>& operator*=(const int &x);
        Vector<int>& operator*=(const double &x);
        Vector<int>& operator*=(const float &x);
        friend Vector<int> operator*(Vector<int> A, const int &x);
        friend Vector<int> operator*(Vector<int> A, const double &x);
        friend Vector<int> operator*(Vector<int> A, const float &x);
        friend Vector<int> operator*(const int &x, Vector<int> A);
        friend Vector<int> operator*(const double &x, Vector<int> A);
        friend Vector<int> operator*(const float &x, Vector<int> A);
    };
    std::ostream& operator<<(std::ostream& os, Vector<int> vector);
    Vector<int> operator+(Vector<int> A, const Vector<int>& B);
    Vector<int> operator+(Vector<int> A, const Vector<double>& B);
    Vector<int> operator+(Vector<int> A, const Vector<float>& B);
    Vector<int> operator-(Vector<int> A, const Vector<int>& B);
    Vector<int> operator-(Vector<int> A, const Vector<double>& B);
    Vector<int> operator-(Vector<int> A, const Vector<float>& B);
    Vector<int> operator*(Vector<int> A, const int &x);
    Vector<int> operator*(Vector<int> A, const double &x);
    Vector<int> operator*(Vector<int> A, const float &x);
    Vector<int> operator*(const int &x, Vector<int> A);
    Vector<int> operator*(const double &x, Vector<int> A);
    Vector<int> operator*(const float &x, Vector<int> A);
}