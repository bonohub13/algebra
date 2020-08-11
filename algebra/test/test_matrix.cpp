#include <iostream>

#include "algebra/matrix/matrix.hpp"

int main()
{
    algebra::Matrix<int> A(3, 3);
    algebra::Matrix<int> B({{1, 0}, {0, 1}});

    std::cout << "A: " << A << std::endl;
    std::cout << "size: (" << A.size()[0] << ", " << A.size()[1] << ")" << std::endl;
    std::cout << "B: " << B << std::endl;
    std::cout << "size: (" << B.size()[0] << ", " << B.size()[1] << ")" << std::endl;
}