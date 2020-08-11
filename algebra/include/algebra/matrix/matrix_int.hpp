#pragma once

namespace algebra
{
    template <typename T>
    class Matrix;
    template <>
    class Matrix<int>
    {
    public:
        Matrix(const std::vector<std::vector<int>> &matrix);
        Matrix(const unsigned int &hor_size, const unsigned int &ver_size); // (const unsigned int &horizontal size, const unsigned int &vertical size)
    private: // variables
        std::vector<std::vector<int>> _matrix;
    public: // setters and getters
        std::vector<std::vector<int>> get_matrix() const;
        std::array<std::size_t, 2> size() const;
        std::vector<std::vector<int>> set_matrix(const std::vector<std::vector<int>> &matrix);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, const Matrix<int> &M);
    };
    std::ostream& operator<<(std::ostream &os, const Matrix<int> &M);
}