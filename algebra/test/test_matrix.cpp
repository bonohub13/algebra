#include <iostream>

#include "algebra/matrix/matrix.hpp"

template<typename T1, typename T2>
void test_adder(algebra::Matrix<T1> A, algebra::Matrix<T2> B)
{
    std::cout << "A + B = " << A + B << std::endl;
}

template<typename T1, typename T2>
void test_scala(T1 x, algebra::Matrix<T2> A)
{
    std::cout << x << " * " << A << " = " << x * A << std::endl;
}

int main()
{
    algebra::Matrix<int> A(2, 2);
    algebra::Matrix<int> B({{1, 0}, {0, 1}});

    std::cout << "A: " << A << std::endl;
    std::cout << "size: (" << A.size()[0] << ", " << A.size()[1] << ")" << std::endl;
    std::cout << "B: " << B << std::endl;
    std::cout << "size: (" << B.size()[0] << ", " << B.size()[1] << ")" << std::endl;

    test_adder(A, B);
    test_adder(B, B);
}