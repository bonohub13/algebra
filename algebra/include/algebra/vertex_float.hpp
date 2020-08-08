#pragma once

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
    public: // setters and getters
        std::vector<float> get_vertex() const;
        std::string get_type() const;
        unsigned int size() const;
        void set_vertex(std::vector<float> vertex);
        void set_type(std::string type);
    public: // operators
        void operator+=(const Vertex<int>& A);
        void operator+=(const Vertex<double>& A);
        void operator+=(const Vertex<float>& A);
        void operator-=(const Vertex<int>& A);
        void operator-=(const Vertex<double>& A);
        void operator-=(const Vertex<float>& A);
        Vertex<float> operator+(const Vertex<int>& A);
        Vertex<float> operator+(const Vertex<double>& A);
        Vertex<float> operator+(const Vertex<float>& A);
        Vertex<float> operator-(const Vertex<int>& A);
        Vertex<float> operator-(const Vertex<double>& A);
        Vertex<float> operator-(const Vertex<float>& A);
        friend std::ostream& operator<<(std::ostream &os, Vertex<float> vertex);
        friend Vertex<float> operator+(const Vertex<int> &A, const Vertex<float> &B);
        friend Vertex<float> operator+(const Vertex<double> &A, const Vertex<float> &B);
        friend Vertex<float> operator-(const Vertex<int> &A, const Vertex<float> &B);
        friend Vertex<float> operator-(const Vertex<double> &A, const Vertex<float> &B);
    };
    std::ostream& operator<<(std::ostream& os, Vertex<float> vertex);
    Vertex<float> operator+(const Vertex<int> &A, const Vertex<float> &B);
    Vertex<float> operator+(const Vertex<double> &A, const Vertex<float> &B);
    Vertex<float> operator-(const Vertex<int> &A, const Vertex<float> &B);
    Vertex<float> operator-(const Vertex<double> &A, const Vertex<float> &B);
}