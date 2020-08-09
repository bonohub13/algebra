#pragma once

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
    public: // setters and getters
        std::vector<int> get_vertex() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vertex(std::vector<int> vertex);
        void set_type(std::string type);
    public: // operators
        /* additions */
        void operator+=(const Vertex<int>& A);
        void operator+=(const Vertex<double>& A);
        void operator+=(const Vertex<float>& A);
        Vertex<int> operator+(const Vertex<int>& A);
        Vertex<int> operator+(const Vertex<double>& A);
        Vertex<int> operator+(const Vertex<float>& A);
        friend Vertex<int> operator+(const Vertex<double> &A, const Vertex<int> &B);
        friend Vertex<int> operator+(const Vertex<float> &A, const Vertex<int> &B);
        /* subtractions */
        void operator-=(const Vertex<int> &A);
        void operator-=(const Vertex<double> &A);
        void operator-=(const Vertex<float> &A);
        Vertex<int> operator-(const Vertex<int> &A);
        Vertex<int> operator-(const Vertex<double> &A);
        Vertex<int> operator-(const Vertex<float> &A);
        friend Vertex<int> operator-(const Vertex<double> &A, const Vertex<int> &B);
        friend Vertex<int> operator-(const Vertex<float> &A, const Vertex<int> &B);
        /* Scala multiplications */
        void operator*=(const int &x);
        void operator*=(const double &x);
        void operator*=(const float &x);
        Vertex<int> operator*(const int &x);
        Vertex<int> operator*(const double &x);
        Vertex<int> operator*(const float &x);
        friend Vertex<int> operator*(const int &x, const Vertex<int> &A);
        friend Vertex<int> operator*(const double &x, const Vertex<int> &A);
        friend Vertex<int> operator*(const float &x, const Vertex<int> &A);
        /* format string output */
        friend std::ostream& operator<<(std::ostream &os, Vertex<int> vertex);
    };
    std::ostream& operator<<(std::ostream& os, Vertex<int> vertex);
    Vertex<int> operator+(const Vertex<double> &A, const Vertex<int> &B);
    Vertex<int> operator+(const Vertex<float> &A, const Vertex<int> &B);
    Vertex<int> operator-(const Vertex<double> &A, const Vertex<int> &B);
    Vertex<int> operator-(const Vertex<float> &A, const Vertex<int> &B);
    Vertex<int> operator*(const int &x, const Vertex<int> &A);
    Vertex<int> operator*(const double &x, const Vertex<int> &A);
    Vertex<int> operator*(const float &x, const Vertex<int> &A);
}