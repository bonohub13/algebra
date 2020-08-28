#pragma once

namespace algebra
{
    template <typename T>
    class Matrix;
    template <>
    class Matrix<float>
    {
    public:
        Matrix(const std::vector<std::vector<float>> &matrix);
        Matrix(const unsigned int &hor_size, const unsigned int &ver_size); // (const unsigned int &horizontal size, const unsigned int &vertical size)
    private: // variables
        std::vector<std::vector<float>> _matrix;
    public: // setters and getters
        std::vector<std::vector<float>> get_matrix() const;
        std::array<std::size_t, 2> size() const;
        void set_matrix(const std::vector<std::vector<float>> &matrix);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, const Matrix<float> &M);
        // additions
        Matrix<float>& operator+=(const Matrix<int> &A);
        Matrix<float>& operator+=(const Matrix<double> &A);
        Matrix<float>& operator+=(const Matrix<float> &A);
        friend Matrix<float> operator+(Matrix<float> A, const Matrix<int> &B);
        friend Matrix<float> operator+(Matrix<float> A, const Matrix<double> &B);
        friend Matrix<float> operator+(Matrix<float> A, const Matrix<float> &B);
        // subtractions
        Matrix<float>& operator-=(const Matrix<int> &A);
        Matrix<float>& operator-=(const Matrix<double> &A);
        Matrix<float>& operator-=(const Matrix<float> &A);
        friend Matrix<float> operator-(Matrix<float> A, const Matrix<int> &B);
        friend Matrix<float> operator-(Matrix<float> A, const Matrix<double> &B);
        friend Matrix<float> operator-(Matrix<float> A, const Matrix<float> &B);
        // Scala multiplications
    };
    std::ostream& operator<<(std::ostream &os, const Matrix<float> &M);
    Matrix<float> operator+(Matrix<float> A, const Matrix<int> &B);
    Matrix<float> operator+(Matrix<float> A, const Matrix<double> &B);
    Matrix<float> operator+(Matrix<float> A, const Matrix<float> &B);
    Matrix<float> operator-(Matrix<float> A, const Matrix<int> &B);
    Matrix<float> operator-(Matrix<float> A, const Matrix<double> &B);
    Matrix<float> operator-(Matrix<float> A, const Matrix<float> &B);
}