#include "../include/algebra/matrix/matrix.hpp"

// multiply vector and matrix
algebra::Matrix<int> algebra::operator*(Vector<int> A, const Matrix<int> &B)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    int output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<int>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<int> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<int> algebra::operator*(Vector<int> A, const Matrix<double> &B)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    int output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<int>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<double> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<int> algebra::operator*(Vector<int> A, const Matrix<float> &B)
{
    std::vector<std::vector<int>> matrix;
    std::vector<int> m_n;
    int output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<int>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<float> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<double> algebra::operator*(Vector<double> A, const Matrix<int> &B)
{
    std::vector<std::vector<double>> matrix;
    std::vector<double> m_n;
    double output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<double>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<int> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<double> algebra::operator*(Vector<double> A, const Matrix<double> &B)
{
    std::vector<std::vector<double>> matrix;
    std::vector<double> m_n;
    double output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<double>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<double> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<double> algebra::operator*(Vector<double> A, const Matrix<float> &B)
{
    std::vector<std::vector<double>> matrix;
    std::vector<double> m_n;
    double output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<double>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<float> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<float> algebra::operator*(Vector<float> A, const Matrix<int> &B)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    float output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<float>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<int> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<float> algebra::operator*(Vector<float> A, const Matrix<double> &B)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    float output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<float>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<double> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Matrix<float> algebra::operator*(Vector<float> A, const Matrix<float> &B)
{
    std::vector<std::vector<float>> matrix;
    std::vector<float> m_n;
    float output;

    if (A.get_type() == "horizontal" && A.size() == B.size()[1])
    {
        for (unsigned int i=0; i<B.size()[0]; i++)
        {
            output = 0;
            for (unsigned int j=0; j<B.size()[1]; j++)
                output += A.get_vector()[j] * B.get_matrix()[j][i];
            m_n.push_back(output);
        }
        matrix.push_back(m_n);

        return Matrix<float>(matrix);
    }
    else if (A.get_type() == "vertical" && A.size() == B.size()[0] && B.size()[1] == 1)
    {
        Vector<float> tmp_vector(B.get_matrix()[0]);
        return A * tmp_vector;
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property");
}
algebra::Vector<int> algebra::operator*(Matrix<int> A, const Vector<int> &B)
{
    std::vector<int> vector;
    int v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<int>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<int> algebra::operator*(Matrix<int> A, const Vector<double> &B)
{
    std::vector<int> vector;
    int v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<int>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<int> algebra::operator*(Matrix<int> A, const Vector<float> &B)
{
    std::vector<int> vector;
    int v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<int>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<double> algebra::operator*(Matrix<double> A, const Vector<int> &B)
{
    std::vector<double> vector;
    double v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<double>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<double> algebra::operator*(Matrix<double> A, const Vector<double> &B)
{
    std::vector<double> vector;
    double v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<double>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<double> algebra::operator*(Matrix<double> A, const Vector<float> &B)
{
    std::vector<double> vector;
    double v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<double>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<float> algebra::operator*(Matrix<float> A, const Vector<int> &B)
{
    std::vector<float> vector;
    float v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<float>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<float> algebra::operator*(Matrix<float> A, const Vector<double> &B)
{
    std::vector<float> vector;
    float v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<float>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
algebra::Vector<float> algebra::operator*(Matrix<float> A, const Vector<float> &B)
{
    std::vector<float> vector;
    float v_n;

    if (B.get_type() == "vertical" && A.size()[0] == B.size())
    {
        for (unsigned int i=0; i<A.size()[1]; i++)
        {
            v_n = 0;
            for (unsigned int j=0; j<A.size()[0]; j++)
                v_n += A.get_matrix()[i][j] * B.get_vector()[j];
            vector.push_back(v_n);
        }
        return Vector<float>(vector);
    }
    else
        throw std::invalid_argument("The Vector/Matrix used does not have the necessary property.");
}
// multiply matrices
algebra::Matrix<int> algebra::operator*(Matrix<int> A, const Matrix<int> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<int> algebra::operator*(Matrix<int> A, const Matrix<double> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<int> algebra::operator*(Matrix<int> A, const Matrix<float> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<double> algebra::operator*(Matrix<double> A, const Matrix<int> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<double> algebra::operator*(Matrix<double> A, const Matrix<double> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<double> algebra::operator*(Matrix<double> A, const Matrix<float> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<float> algebra::operator*(Matrix<float> A, const Matrix<int> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<float> algebra::operator*(Matrix<float> A, const Matrix<double> &B)
{
    A *= B;
    return A;
}
algebra::Matrix<float> algebra::operator*(Matrix<float> A, const Matrix<float> &B)
{
    A *= B;
    return A;
}
template<>
algebra::Matrix<int> algebra::triangularMatrix(const Matrix<int> &A)
{}
template<>
algebra::Matrix<int> algebra::triangularMatrix(const Matrix<double> &A)
{}
template<>
algebra::Matrix<int> algebra::triangularMatrix(const Matrix<float> &A)
{}
template<>
algebra::Matrix<double> algebra::triangularMatrix(const Matrix<int> &A)
{}
template<>
algebra::Matrix<double> algebra::triangularMatrix(const Matrix<double> &A)
{}
template<>
algebra::Matrix<double> algebra::triangularMatrix(const Matrix<float> &A)
{}
template<>
algebra::Matrix<float> algebra::triangularMatrix(const Matrix<int> &A)
{}
template<>
algebra::Matrix<float> algebra::triangularMatrix(const Matrix<double> &A)
{}
template<>
algebra::Matrix<float> algebra::triangularMatrix(const Matrix<float> &A)
{}