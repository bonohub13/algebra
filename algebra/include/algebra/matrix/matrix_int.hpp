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
        void set_matrix(const std::vector<std::vector<int>> &matrix);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, const Matrix<int> &M);
        // additions
        void operator+=(const Matrix<int> &A);
        void operator+=(const Matrix<double> &A);
        void operator+=(const Matrix<float> &A);
        Matrix<int> operator+(const Matrix<int> &A);
        Matrix<int> operator+(const Matrix<double> &A);
        Matrix<int> operator+(const Matrix<float> &A);
        friend Matrix<int> operator+(const Matrix<double> &A, const Matrix<int> &B);
        friend Matrix<int> operator+(const Matrix<float> &A, const Matrix<int> &B);
        // subtractions
        void operator-=(const Matrix<int> &A);
        void operator-=(const Matrix<double> &A);
        void operator-=(const Matrix<float> &A);
        Matrix<int> operator-(const Matrix<int> &A);
        Matrix<int> operator-(const Matrix<double> &A);
        Matrix<int> operator-(const Matrix<float> &A);
        friend Matrix<int> operator-(const Matrix<double> &A, const Matrix<int> &B);
        friend Matrix<int> operator-(const Matrix<float> &A, const Matrix<int> &B);
    };
    std::ostream& operator<<(std::ostream &os, const Matrix<int> &M);
    Matrix<int> operator+(const Matrix<double> &A, const Matrix<int> &B);
    Matrix<int> operator+(const Matrix<float> &A, const Matrix<int> &B);
    Matrix<int> operator-(const Matrix<double> &A, const Matrix<int> &B);
    Matrix<int> operator-(const Matrix<float> &A, const Matrix<int> &B);
}