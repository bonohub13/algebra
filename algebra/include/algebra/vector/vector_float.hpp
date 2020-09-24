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
    class Vector<float>
    {
    public:
        Vector(std::vector<float> vector);
        Vector(unsigned int size);
    private: // constant values!
        enum class VectorType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vector
    private:
        std::vector<float> _vector;
        unsigned int _size;
        VectorType _type;  // for identifying horizontal vector and vertical vector
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<float> get_vector() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vector(std::vector<float> vector);
        void set_type(std::string type);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vector<float> vector);
        float& operator[](std::size_t n);
        /* additions */
        Vector<float>& operator+=(const Vector<int>& A);
        Vector<float>& operator+=(const Vector<double>& A);
        Vector<float>& operator+=(const Vector<float>& A);
        friend Vector<float> operator+(Vector<float> A, const Vector<int>& B);
        friend Vector<float> operator+(Vector<float> A, const Vector<double>& B);
        friend Vector<float> operator+(Vector<float> A, const Vector<float>& B);
        /* subtractions */
        Vector<float>& operator-=(const Vector<int>& A);
        Vector<float>& operator-=(const Vector<double>& A);
        Vector<float>& operator-=(const Vector<float>& A);
        friend Vector<float> operator-(Vector<float> A, const Vector<int>& B);
        friend Vector<float> operator-(Vector<float> A, const Vector<double>& B);
        friend Vector<float> operator-(Vector<float> A, const Vector<float>& B);
        /* Scala multiplications */
        Vector<float>& operator*=(const int &x);
        Vector<float>& operator*=(const double &x);
        Vector<float>& operator*=(const float &x);
        friend Vector<float> operator*(Vector<float> A, const int &x);
        friend Vector<float> operator*(Vector<float> A, const double &x);
        friend Vector<float> operator*(Vector<float> A, const float &x);
        friend Vector<float> operator*(const int &x, Vector<float> A);
        friend Vector<float> operator*(const double &x, Vector<float> A);
        friend Vector<float> operator*(const float &x, Vector<float> A);
    };
    std::ostream& operator<<(std::ostream& os, Vector<float> vector);
    Vector<float> operator+(Vector<float> A, const Vector<int>& B);
    Vector<float> operator+(Vector<float> A, const Vector<double>& B);
    Vector<float> operator+(Vector<float> A, const Vector<float>& B);
    Vector<float> operator-(Vector<float> A, const Vector<int>& B);
    Vector<float> operator-(Vector<float> A, const Vector<double>& B);
    Vector<float> operator-(Vector<float> A, const Vector<float>& B);
    Vector<float> operator*(Vector<float> A, const int &x);
    Vector<float> operator*(Vector<float> A, const double &x);
    Vector<float> operator*(Vector<float> A, const float &x);
    Vector<float> operator*(const int &x, Vector<float> A);
    Vector<float> operator*(const double &x, Vector<float> A);
    Vector<float> operator*(const float &x, Vector<float> A);
}