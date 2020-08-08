#include "algebra/vertex.hpp"

int main()
{
    algebra::Vertex<int> a({0, 0, 0});
    algebra::Vertex<int> b({1, 2, 3});

    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;

    a += b;

    std::cout << "A + B = " << a << std::endl;
}