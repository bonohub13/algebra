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
    class Vertex<double>
    {
    public:
        Vertex(std::vector<double> vertex);
        Vertex(unsigned int size);
    private: // constant values!
        enum class VertexType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vertex
    private:
        std::vector<double> _vertex;
        VertexType _type;  // for identifying horizontal vertex and vertical vertex
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<double> get_vertex() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vertex(std::vector<double> vertex);
        void set_type(std::string type);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vertex<double> vertex);
        /* additions */
        Vertex<double>& operator+=(const Vertex<int>& A);
        Vertex<double>& operator+=(const Vertex<double>& A);
        Vertex<double>& operator+=(const Vertex<float>& A);
        friend Vertex<double> operator+(Vertex<double> A, const Vertex<int>& B);
        friend Vertex<double> operator+(Vertex<double> A, const Vertex<double>& B);
        friend Vertex<double> operator+(Vertex<double> A, const Vertex<float>& B);
        /* subtractions */
        Vertex<double>& operator-=(const Vertex<int>& A);
        Vertex<double>& operator-=(const Vertex<double>& A);
        Vertex<double>& operator-=(const Vertex<float>& A);
        friend Vertex<double> operator-(Vertex<double> A, const Vertex<int>& B);
        friend Vertex<double> operator-(Vertex<double> A, const Vertex<double>& B);
        friend Vertex<double> operator-(Vertex<double> A, const Vertex<float>& B);
        /* Scala multiplications */
        Vertex<double>& operator*=(const int &x);
        Vertex<double>& operator*=(const double &x);
        Vertex<double>& operator*=(const float &x);
        friend Vertex<double> operator*(Vertex<double> A, const int &x);
        friend Vertex<double> operator*(Vertex<double> A, const double &x);
        friend Vertex<double> operator*(Vertex<double> A, const float &x);
        friend Vertex<double> operator*(const int &x, Vertex<double> A);
        friend Vertex<double> operator*(const double &x, Vertex<double> A);
        friend Vertex<double> operator*(const float &x, Vertex<double> A);
    };
    std::ostream& operator<<(std::ostream& os, Vertex<double> vertex);
    Vertex<double> operator+(Vertex<double> A, const Vertex<int>& B);
    Vertex<double> operator+(Vertex<double> A, const Vertex<double>& B);
    Vertex<double> operator+(Vertex<double> A, const Vertex<float>& B);
    Vertex<double> operator-(Vertex<double> A, const Vertex<int>& B);
    Vertex<double> operator-(Vertex<double> A, const Vertex<double>& B);
    Vertex<double> operator-(Vertex<double> A, const Vertex<float>& B);
    Vertex<double> operator*(Vertex<double> A, const int &x);
    Vertex<double> operator*(Vertex<double> A, const double &x);
    Vertex<double> operator*(Vertex<double> A, const float &x);
    Vertex<double> operator*(const int &x, Vertex<double> A);
    Vertex<double> operator*(const double &x, Vertex<double> A);
    Vertex<double> operator*(const float &x, Vertex<double> A);
}