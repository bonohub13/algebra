#pragma once

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
        void T() const;
    public: // setters and getters
        std::vector<double> get_vertex() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vertex(std::vector<double> vertex);
        void set_type(std::string type);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, Vertex<double> vertex);
        void operator+=(const Vertex<int>& A);
        void operator+=(const Vertex<double>& A);
        void operator+=(const Vertex<float>& A);
        Vertex<double> operator+(const Vertex<int>& A);
        Vertex<double> operator+(const Vertex<double>& A);
        Vertex<double> operator+(const Vertex<float>& A);
        friend Vertex<double> operator+(const Vertex<int> &A, const Vertex<double> &B);
        friend Vertex<double> operator+(const Vertex<float> &A, const Vertex<double> &B);
        void operator-=(const Vertex<int>& A);
        void operator-=(const Vertex<double>& A);
        void operator-=(const Vertex<float>& A);
        Vertex<double> operator-(const Vertex<int>& A);
        Vertex<double> operator-(const Vertex<double>& A);
        Vertex<double> operator-(const Vertex<float>& A);
        friend Vertex<double> operator-(const Vertex<int> &A, const Vertex<double> &B);
        friend Vertex<double> operator-(const Vertex<float> &A, const Vertex<double> &B);
        void operator*=(const int &x);
        void operator*=(const double &x);
        void operator*=(const float &x);
        Vertex<double> operator*(const int &x);
        Vertex<double> operator*(const double &x);
        Vertex<double> operator*(const float &x);
        friend Vertex<double> operator*(const int &x, const Vertex<double> &A);
        friend Vertex<double> operator*(const double &x, const Vertex<double> &A);
        friend Vertex<double> operator*(const float &x, const Vertex<double> &A);
    };
    std::ostream& operator<<(std::ostream& os, Vertex<double> vertex);
    Vertex<double> operator+(const Vertex<int> &A, const Vertex<double> &B);
    Vertex<double> operator+(const Vertex<float> &A, const Vertex<double> &B);
    Vertex<double> operator-(const Vertex<int> &A, const Vertex<double> &B);
    Vertex<double> operator-(const Vertex<float> &A, const Vertex<double> &B);
    Vertex<double> operator*(const int &x, const Vertex<double> &A);
    Vertex<double> operator*(const double &x, const Vertex<double> &A);
    Vertex<double> operator*(const float &x, const Vertex<double> &A);
}