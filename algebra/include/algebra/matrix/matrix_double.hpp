#pragma once

namespace algebra
{
    template <typename T>
    class Matrix;
    template <>
    class Matrix<double>
    {
    public:
        Matrix(const std::vector<std::vector<double>> &matrix);
        Matrix(const unsigned int &hor_size, const unsigned int &ver_size); // (const unsigned int &horizontal size, const unsigned int &vertical size)
    private: // variables
        std::vector<std::vector<double>> _matrix;
    public: // setters and getters
        std::vector<std::vector<double>> get_matrix() const;
        std::array<std::size_t, 2> size() const;
        void set_matrix(const std::vector<std::vector<double>> &matrix);
    public: // operators
        friend std::ostream& operator<<(std::ostream &os, const Matrix<double> &M);
        // additions
        Matrix<double>& operator+=(const Matrix<int> &A);
        Matrix<double>& operator+=(const Matrix<double> &A);
        Matrix<double>& operator+=(const Matrix<float> &A);
        friend Matrix<double> operator+(Matrix<double> A, const Matrix<int> &B);
        friend Matrix<double> operator+(Matrix<double> A, const Matrix<double> &B);
        friend Matrix<double> operator+( Matrix<double> A, const Matrix<float> &B);
        // subtractions
        Matrix<double>& operator-=(const Matrix<int> &A);
        Matrix<double>& operator-=(const Matrix<double> &A);
        Matrix<double>& operator-=(const Matrix<float> &A);
        friend Matrix<double> operator-(Matrix<double> A, const Matrix<int> &B);
        friend Matrix<double> operator-(Matrix<double> A, const Matrix<double> &B);
        friend Matrix<double> operator-(Matrix<double> A, const Matrix<float> &B);
        // Scala multiplications
    };
    std::ostream& operator<<(std::ostream &os, const Matrix<double> &M);
    Matrix<double> operator+(const Matrix<double> A, const Matrix<int> &B);
    Matrix<double> operator+(const Matrix<double> A, const Matrix<double> &B);
    Matrix<double> operator+(const Matrix<double> A, const Matrix<float> &B);
    Matrix<double> operator-(Matrix<double> A, const Matrix<int> &B);
    Matrix<double> operator-(Matrix<double> A, const Matrix<double> &B);
    Matrix<double> operator-(Matrix<double> A, const Matrix<float> &B);
}
