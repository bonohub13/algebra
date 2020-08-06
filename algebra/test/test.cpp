#include "algebra/vertex.hpp"

int main()
{
    algebra::Vertex<int> a({0, 0, 0});
    algebra::Vertex<int> b({1, 2, 3});
    algebra::Vertex<int> c = a + b;

    std::cout << "a + b = " << c << std::endl;

    c = a - b;

    std::cout << "a - b = " << c << std::endl;

    std::cout << "2 * b = " << 2 * b << std::endl;
    std::cout << "0.5 * b = " << 0.5 * b << std::endl;
    std::cout << "2.5 * b = " << 2.5 * b << std::endl;
}