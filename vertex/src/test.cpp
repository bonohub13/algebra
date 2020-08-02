#include "vertex.hpp"

int main()
{
    algebra::Vertex<int> a({0, 0, 0});
    algebra::Vertex<int> b({1, 2, 3});
    algebra::Vertex<int> c = a + b;

    std::cout << "a + b = " << c << std::endl;

    c = a - b;

    std::cout << "a - b = " << c << std::endl;
}