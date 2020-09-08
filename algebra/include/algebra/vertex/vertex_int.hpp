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
    class Vertex<int>
    {
    public:
        Vertex(std::vector<int> vertex);
        Vertex(unsigned int size);
    private: // constant values!
        enum class VertexType
        {
            HORIZONTAL,
            VERTICAL,
        }; // for identifying the type of vertex
    private:
        std::vector<int> _vertex;
        VertexType _type; // for identifying horizontal vertex and vertical vertex
    private: // functions
        void transpose();
    public: // functions
        void T();
    public: // setters and getters
        std::vector<int> get_vertex() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vertex(std::vector<int> vertex);
        void set_type(std::string type);
    public: // operators
        /* format string output */
        friend std::ostream& operator<<(std::ostream &os, Vertex<int> vertex);
        /* additions */
        Vertex<int>& operator+=(const Vertex<int>& A);
        Vertex<int>& operator+=(const Vertex<double>& A);
        Vertex<int>& operator+=(const Vertex<float>& A);
        friend Vertex<int> operator+(Vertex<int> A, const Vertex<int>& B);
        friend Vertex<int> operator+(Vertex<int> A, const Vertex<double>& B);
        friend Vertex<int> operator+(Vertex<int> A, const Vertex<float>& B);
        /* subtractions */
        Vertex<int>& operator-=(const Vertex<int>& A);
        Vertex<int>& operator-=(const Vertex<double>& A);
        Vertex<int>& operator-=(const Vertex<float>& A);
        friend Vertex<int> operator-(Vertex<int> A, const Vertex<int>& B);
        friend Vertex<int> operator-(Vertex<int> A, const Vertex<double>& B);
        friend Vertex<int> operator-(Vertex<int> A, const Vertex<float>& B);
        /* Scala multiplications */
        Vertex<int>& operator*=(const int &x);
        Vertex<int>& operator*=(const double &x);
        Vertex<int>& operator*=(const float &x);
        friend Vertex<int> operator*(Vertex<int> A, const int &x);
        friend Vertex<int> operator*(Vertex<int> A, const double &x);
        friend Vertex<int> operator*(Vertex<int> A, const float &x);
        friend Vertex<int> operator*(const int &x, Vertex<int> A);
        friend Vertex<int> operator*(const double &x, Vertex<int> A);
        friend Vertex<int> operator*(const float &x, Vertex<int> A);
    };
    std::ostream& operator<<(std::ostream& os, Vertex<int> vertex);
    Vertex<int> operator+(Vertex<int> A, const Vertex<int>& B);
    Vertex<int> operator+(Vertex<int> A, const Vertex<double>& B);
    Vertex<int> operator+(Vertex<int> A, const Vertex<float>& B);
    Vertex<int> operator-(Vertex<int> A, const Vertex<int>& B);
    Vertex<int> operator-(Vertex<int> A, const Vertex<double>& B);
    Vertex<int> operator-(Vertex<int> A, const Vertex<float>& B);
    Vertex<int> operator*(Vertex<int> A, const int &x);
    Vertex<int> operator*(Vertex<int> A, const double &x);
    Vertex<int> operator*(Vertex<int> A, const float &x);
    Vertex<int> operator*(const int &x, Vertex<int> A);
    Vertex<int> operator*(const double &x, Vertex<int> A);
    Vertex<int> operator*(const float &x, Vertex<int> A);
}