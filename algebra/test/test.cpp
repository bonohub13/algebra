#include "algebra/vertex.hpp"

int main()
{
    algebra::Vertex<int> a({0, 0, 0});
    algebra::Vertex<int> b({1, 2, 3});

    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;

    a += b;

    std::cout << "A + B = " << a << std::endl;

    a *= 6;
    std::cout << "A * 6 = " << a << std::endl;

    a *= 0.3;
    std::cout << "A * 0.3 = " << a << std::endl;

    std::cout << "1.01 * A = " << 1.01 * a << std::endl;
}