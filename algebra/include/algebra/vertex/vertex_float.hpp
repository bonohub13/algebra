#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "vertex.hpp"

namespace algebra
{
    template <typename T>
    class Vertex; // not run
    template <>
    class Vertex<float>
    {
    public:
        Vertex(std::vector<float> vertex);
        Vertex(unsigned int size);
    private: // constant values!
        enum class VertexType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vertex
    private:
        std::vector<float> _vertex;
        unsigned int _size;
        VertexType _type;  // for identifying horizontal vertex and vertical vertex
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<float> get_vertex() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vertex(std::vector<float> vertex);
        void set_type(std::string type);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vertex<float> vertex);
        /* additions */
        Vertex<float>& operator+=(const Vertex<int>& A);
        Vertex<float>& operator+=(const Vertex<double>& A);
        Vertex<float>& operator+=(const Vertex<float>& A);
        friend Vertex<float> operator+(Vertex<float> A, const Vertex<int>& B);
        friend Vertex<float> operator+(Vertex<float> A, const Vertex<double>& B);
        friend Vertex<float> operator+(Vertex<float> A, const Vertex<float>& B);
        /* subtractions */
        Vertex<float>& operator-=(const Vertex<int>& A);
        Vertex<float>& operator-=(const Vertex<double>& A);
        Vertex<float>& operator-=(const Vertex<float>& A);
        friend Vertex<float> operator-(Vertex<float> A, const Vertex<int>& B);
        friend Vertex<float> operator-(Vertex<float> A, const Vertex<double>& B);
        friend Vertex<float> operator-(Vertex<float> A, const Vertex<float>& B);
        /* Scala multiplications */
        Vertex<float>& operator*=(const int &x);
        Vertex<float>& operator*=(const double &x);
        Vertex<float>& operator*=(const float &x);
        friend Vertex<float> operator*(Vertex<float> A, const int &x);
        friend Vertex<float> operator*(Vertex<float> A, const double &x);
        friend Vertex<float> operator*(Vertex<float> A, const float &x);
        friend Vertex<float> operator*(const int &x, Vertex<float> A);
        friend Vertex<float> operator*(const double &x, Vertex<float> A);
        friend Vertex<float> operator*(const float &x, Vertex<float> A);
    };
    std::ostream& operator<<(std::ostream& os, Vertex<float> vertex);
    Vertex<float> operator+(Vertex<float> A, const Vertex<int>& B);
    Vertex<float> operator+(Vertex<float> A, const Vertex<double>& B);
    Vertex<float> operator+(Vertex<float> A, const Vertex<float>& B);
    Vertex<float> operator-(Vertex<float> A, const Vertex<int>& B);
    Vertex<float> operator-(Vertex<float> A, const Vertex<double>& B);
    Vertex<float> operator-(Vertex<float> A, const Vertex<float>& B);
    Vertex<float> operator*(Vertex<float> A, const int &x);
    Vertex<float> operator*(Vertex<float> A, const double &x);
    Vertex<float> operator*(Vertex<float> A, const float &x);
    Vertex<float> operator*(const int &x, Vertex<float> A);
    Vertex<float> operator*(const double &x, Vertex<float> A);
    Vertex<float> operator*(const float &x, Vertex<float> A);
}